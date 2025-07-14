#ifndef USER_H
#define USER_H
#include <string>
#include <QString>
#include "userNode.h"
using namespace std;


class User
{
protected:
    QString name;
    QString lastName;
    QString id;
    int age;
    QString username;
    QString password;
public:
    User();
    User(QString name, QString lastName, QString id, int age, QString username, QString password)
        : name(name), lastName(lastName), id(id), age(age), username(username), password(password) {}
    virtual ~User();


    QString getName() const ;
    QString getLastName() const ;
    QString getId() const ;
    int getAge() const ;
    QString getUsername() const ;
    QString getPassword() const ;


    void setUsername(const QString& uname);
    void setPassword(const QString& pword);


    virtual void signup() const=0;

    virtual bool login(const QString& username, const QString& password, UserNode* head) =0 ;



};

#endif // USER_H
