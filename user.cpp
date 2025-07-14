#include "user.h"

#include <iostream>
User::User() {}



User::~User() {}

QString User::getName() const{
    return name;
}

QString User::getLastName() const{
    return lastName;
}

QString User::getId() const{
    return id;
}

int User::getAge() const {
    return age;
}

QString User::getUsername() const {
    return username;
}

QString User::getPassword() const {
    return password;
}

void User::setUsername(const QString& uname) {
    username = uname;
}

void User::setPassword(const QString& pword) {
    password = pword;
}
