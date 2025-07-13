#ifndef USER_H
#define USER_H
#include <string>
#include <QString>
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
    User(QString uname, QString pword) : username(uname), password(pword) {}
    virtual ~User();


    QString getUsername() const;
    QString getPassword() const;


    void setUsername(const QString& uname);
    void setPassword(const QString& pword);


    virtual void signup() const=0;

    virtual void login() const=0;



};

#endif // USER_H
