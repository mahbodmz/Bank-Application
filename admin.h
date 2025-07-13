#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"

class Admin : public User{
public:
    Admin();
    virtual ~Admin();

    void login() const override;
    void signup() const override;
};

#endif // ADMIN_H
