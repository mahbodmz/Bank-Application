#ifndef USER_H
#define USER_H
#include <string>
using namespace std;


class User
{
protected:
    string name;
    string lastName;
    string id;
    int age;
    string username;
    string password;
public:
    User();
    virtual ~User();
    virtual void signup() const=0;

    virtual void login() const=0;
};

#endif // USER_H
