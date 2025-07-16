#ifndef ACCOUNTUTILS_H
#define ACCOUNTUTILS_H
#include "creditcard.h"
#include <QString>
#include "customer.h"
#include "userNode.h"

void saveAccountToFile(const QString& username, const QString& accountType, CreditCard* account);
void loadAccountsFromFile(UserNode* customerHead);
#endif // ACCOUNTUTILS_H
