#include "customer.h"
#include <QFile>
#include <QTextStream>
Customer::Customer() {}

Customer::~Customer() {}

void Customer::login() const{
    //being made...
}

void Customer::signup() const{
    //being made...
}


void Customer::loadFromFile(UserNode*& head) {
    QFile file("customer.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(',');
        if (parts.size() >= 2) {
            QString username = parts[0];
            QString password = parts[1];

            Customer* a = new Customer(username, password);
            UserNode* newNode = new UserNode(a);
            newNode->next = head;
            head = newNode;
        }
    }
    file.close();
}


void Customer::saveToFile(UserNode* head) {
    QFile file("Customer.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) return;

    QTextStream out(&file);
    while (head) {
        Customer* a = dynamic_cast<Customer*>(head->data);
        if (a) {
            out << a->getUsername() << "," << a->getPassword() << "\n";
        }
        head = head->next;
    }
    file.close();
}
