#ifndef DEBITACCOUNT_H
#define DEBITACCOUNT_H

#include "creditcard.h"

class DebitAccount: public CreditCard
{
public:
    DebitAccount();

    DebitAccount(int cardNum, int shabaNum, int accountNum, int cvv, float balance,int expireYear, int expireMonth, QString password, QString secondPassword);

    void moneyTransfer() override;
    QString toFileString() const override;
};

#endif // DEBITACCOUNT_H
