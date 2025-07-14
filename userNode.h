#ifndef USERNODE_H
#define USERNODE_H

class User;

struct UserNode {
    User* data;
    UserNode* next;

    UserNode(User* u) : data(u), next(nullptr) {}
};

#endif // USERNODE_H
