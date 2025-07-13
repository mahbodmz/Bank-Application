#ifndef COSTUMER_H
#define COSTUMER_H

#include "user.h"

class Costumer:public User{
public:
    Costumer();
    virtual ~Costumer();

    void login() const override;
};

#endif // COSTUMER_H
