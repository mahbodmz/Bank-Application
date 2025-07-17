#ifndef DEBITACCOUNT_H
#define DEBITACCOUNT_H

#include "creditcard.h"

class DebitAccount: public CreditCard
{
public:
    DebitAccount();

    DebitAccount(long long cardNum, long long shabaNum, long long accountNum, int cvv, double balance,int expireYear, int expireMonth, QString password, QString secondPassword);

    void moneyTransfer() override;
    QString toFileString() const override;
};

#endif // DEBITACCOUNT_H
