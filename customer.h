#ifndef COSTUMER_H
#define COSTUMER_H

#include "user.h"
#include "usernode.h"
class Customer:public User{
public:
    Customer();
    Customer(QString name, QString lastName, QString id, int age, QString username, QString password)
        : User(name, lastName, id, age, username, password) {}
    virtual ~Customer();

    void login() const override;
    void signup() const override;

    static void loadFromFile(UserNode*& head);
    static void saveToFile(UserNode* head);
    static bool login(UserNode* head, const QString& username, const QString& password);
};



#endif // COSTUMER_H
