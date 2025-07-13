#ifndef USERNODE_H
#define USERNODE_H

#include "user.h"

struct UserNode {
    User* data;
    UserNode* next;

    UserNode(User* u) : data(u), next(nullptr) {}
};

#endif // USERNODE_H
