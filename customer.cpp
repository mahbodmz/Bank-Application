#include "customer.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "debitaccount.h"
Customer::Customer() {
    accountCount = 0;
    for (int i = 0; i < 5; ++i)
        accounts[i] = nullptr;
}

Customer::~Customer() {}

bool Customer::login(const QString& username, const QString& password, UserNode* head)
{
    UserNode* current = head;
    while (current != nullptr) {
        if (current->data->getUsername() == username &&
            current->data->getPassword() == password) {
            return true;
        }
        current = current->next;
    }
    return false;
}

void Customer::signup() const{
    //being made...
}
void Customer::signup(const QString& name, const QString& lastName, const QString& id,int age, const QString& username, const QString& password,UserNode*& head)
{

    UserNode* current = head;
    while (current) {
        Customer* existingCustomer = dynamic_cast<Customer*>(current->data);
        if (existingCustomer && existingCustomer->getUsername() == username) {
            QMessageBox::warning(nullptr, "Signup Error", "Username is already taken!");
            return;
        }
        current = current->next;
    }


    Customer* newCustomer = new Customer(name, lastName, id, age, username, password);
    UserNode* newNode = new UserNode(newCustomer);
    newNode->next = head;
    head = newNode;

    QMessageBox::information(nullptr, "Signup Successful", "Customer signed up successfully!");
}

void Customer::loadFromFile(UserNode*& head) {
    QFile file("customer.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(',');
        if (parts.size() == 6) {
            QString name = parts[0];
            QString lastName = parts[1];
            QString id = parts[2];
            int age = parts[3].toInt();
            QString username = parts[4];
            QString password = parts[5];

            Customer* a = new Customer(name, lastName, id, age, username, password);
            UserNode* newNode = new UserNode(a);
            newNode->next = head;
            head = newNode;



        }
    }
    file.close();
}



void Customer::saveToFile(UserNode* head) {
    QFile file("customer.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) return;

    QTextStream out(&file);

    while (head) {
        Customer* customer = dynamic_cast<Customer*>(head->data);
        if (customer) {
            out << customer->getName() << ","
                << customer->getLastName() << ","
                << customer->getId() << ","
                << customer->getAge() << ","
                << customer->getUsername() << ","
                << customer->getPassword() << "\n";
        }
        head = head->next;
    }

    file.close();
}

bool Customer::addAccount(CreditCard* newAcc) {
    qDebug() << "Current account count for" << this->getUsername() << ":" << accountCount;
    if (accountCount < 5) {
        accounts[accountCount++] = newAcc;
        qDebug() << "Account added. New count:" << accountCount;
        return true;
    }
    qDebug() << "Account limit reached!";
    return false;
}

CreditCard* Customer::getAccount(int index) const {
    if (index >= 0 && index < accountCount)
        return accounts[index];
    return nullptr;
}

int Customer::getAccountCount() const {
    return accountCount;
}
