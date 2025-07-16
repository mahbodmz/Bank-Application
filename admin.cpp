#include "admin.h"
#include "customer.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QCoreApplication>
#include <QDir>
Admin::Admin() {}

Admin::~Admin() {}

UserNode* Admin::head = nullptr;

bool Admin::login(const QString& username, const QString& password, UserNode* head)  {
    UserNode* current = head;
    while (current) {
        Admin* admin = dynamic_cast<Admin*>(current->data);
        if (admin && admin->getUsername() == username && admin->getPassword() == password) {
            return true;
        }
        current = current->next;
    }
    return false;
}

void Admin::signup() const {
    //being made ....
}


void Admin::signup(const QString& name, const QString& lastName, const QString& id,int age, const QString& username, const QString& password ,UserNode*& head) {

    UserNode* current = head;
    while (current) {
        Admin* existingAdmin = dynamic_cast<Admin*>(current->data);
        if (existingAdmin && existingAdmin->getUsername() == username) {
            QMessageBox::warning(nullptr, "Signup Error", "Username is already taken!");
            return;
        }
        current = current->next;
    }


    Admin* newAdmin = new Admin(name, lastName, id, age, username, password);
    UserNode* newNode = new UserNode(newAdmin);
    newNode->next = head;
    head = newNode;




    QMessageBox::information(nullptr, "Signup Successful", "Admin signed up successfully!");
}



void Admin::loadFromFile(UserNode*& head) {
    QFile file("admin.txt");
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

            Admin* a = new Admin(name, lastName, id, age, username, password);
            UserNode* newNode = new UserNode(a);
            newNode->next = head;
            head = newNode;
        }
    }
    file.close();
}


void Admin::saveToFile(UserNode* head) {
    qDebug() << "Saving admin data to file...";
    QFile file("admin.txt");

    qDebug() << "Saving admin file at:" << QDir::currentPath() + "/admin.txt";

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Failed to open the file for writing.";
        return;
    }

    QTextStream out(&file);

    while (head) {
        Admin* admin = dynamic_cast<Admin*>(head->data);
        if (admin) {
            out << admin->getName() << ","
                << admin->getLastName() << ","
                << admin->getId() << ","
                << admin->getAge() << ","
                << admin->getUsername() << ","
                << admin->getPassword() << "\n";
        }
        head = head->next;
    }

    file.close();
    qDebug() << "Admin data saved successfully.";
}

void Admin::addAccountForCustomer(Customer* customer, CreditCard* account) {
    if (customer && account) {
        customer->addAccount(account);
    }
}
