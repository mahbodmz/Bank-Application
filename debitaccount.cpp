#include "debitaccount.h"
#include <QDebug>

DebitAccount::DebitAccount() {}

DebitAccount::DebitAccount(long long cardNum, long long shabaNum, long long accountNum, int cvv, double balance,int expireYear, int expireMonth, QString password, QString secondPassword)
    : CreditCard(cardNum, shabaNum, accountNum, cvv, balance, expireYear, expireMonth, password, secondPassword)
{
}

void DebitAccount::moneyTransfer()
{
    // Placeholder logic, real transfer logic will involve checking other accounts
    qDebug() << "Transferring money from DebitAccount " << accountNum;
}

QString DebitAccount::toFileString() const {
    return QString::number(cardNum) + "," +
           QString::number(shabaNum) + "," +
           QString::number(accountNum) + "," +
           QString::number(cvv) + "," +
           QString::number(balance) + "," +
           QString::number(expireYear) + "," +
           QString::number(expireMonth) + "," +
           password + "," + secondPassword;
}
