#include "user.h"

#include <iostream>
User::User() {}



User::~User() {}


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
