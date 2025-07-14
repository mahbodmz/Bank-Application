#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"
#include "usernode.h"
class Admin : public User{
public:
    Admin();
    Admin(QString name, QString lastName, QString id, int age, QString username, QString password)
        : User(name, lastName, id, age, username, password) {}
    virtual ~Admin();

    static UserNode* head;

    bool login(const QString& username, const QString& password, UserNode* head) override;
    void signup() const override;
    static void signup(const QString& name, const QString& lastName, const QString& id,int age, const QString& username, const QString& password , UserNode*& head);

    static void loadFromFile(UserNode*& head);
    static void saveToFile(UserNode* head);
    static bool login(UserNode* head, const QString& username, const QString& password);
};



#endif // ADMIN_H
