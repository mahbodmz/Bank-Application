#include "accountutils.h"
#include <QFile>
#include <QTextStream>
#include "debitaccount.h"
#include <QDebug>

void saveAccountToFile(const QString& username, const QString& accountType, CreditCard* account) {
    QFile file("accounts.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << username << "," << accountType << "," << account->toFileString() << "\n";
        file.close();
    }
}
void loadAccountsFromFile(UserNode* customerHead) {
    QFile file("accounts.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning("Couldn't open accounts.txt for reading.");
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) continue;

        QStringList parts = line.split(",");
        if (parts.size() != 11) continue; // simple error check

        QString username = parts[0];
        QString type = parts[1];

        // Find matching customer in the linked list
        UserNode* currentNode = customerHead;
        Customer* matchedCustomer = nullptr;

        while (currentNode) {
            Customer* temp = dynamic_cast<Customer*>(currentNode->data);
            if (temp && temp->getUsername() == username) {
                matchedCustomer = temp;
                break;
            }
            currentNode = currentNode->next;
        }

        if (!matchedCustomer) continue; // skip if not found




        // Only supporting debit for now
        if (type == "Debit") {
            DebitAccount* acc = new DebitAccount(
                parts[2].toLongLong(),   // cardNum
                parts[3].toLongLong(),   // shabaNum
                parts[4].toLongLong(),   // accountNum
                parts[5].toInt(),   // cvv
                parts[6].toDouble(), // balance (this is important!)
                parts[7].toInt(),   // expireYear
                parts[8].toInt(),   // expireMonth
                parts[9],           // password
                parts[10]           // secondPassword
                );
            if (!matchedCustomer->addAccount(acc)) {
                delete acc; // prevent memory leak
                qWarning() << "Account limit reached for user:" << username;
            }
        }
    }

    file.close();
}
