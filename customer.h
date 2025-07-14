#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "user.h"
#include "usernode.h"
class Customer:public User{
public:
    Customer();
    Customer(QString name, QString lastName, QString id, int age, QString username, QString password)
        : User(name, lastName, id, age, username, password) {}
    virtual ~Customer();

    bool login(const QString& username, const QString& password, UserNode* head) override;

    void signup() const override;

    static void signup(const QString& name, const QString& lastName, const QString& id,int age, const QString& username, const QString& password , UserNode*& head);

    static void loadFromFile(UserNode*& head);
    static void saveToFile(UserNode* head);

    static bool login(UserNode* head, const QString& username, const QString& password);
};



#endif // CUSTOMER_H
