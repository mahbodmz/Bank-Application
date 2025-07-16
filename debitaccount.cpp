#include "debitaccount.h"
#include <QDebug>

DebitAccount::DebitAccount() {}

DebitAccount::DebitAccount(int cardNum, int shabaNum, int accountNum, int cvv, float balance,
                           int expireYear, int expireMonth, QString password, QString secondPassword)
    : CreditCard(cardNum, shabaNum, accountNum, cvv, balance, expireYear, expireMonth, password, secondPassword)
{
}

void DebitAccount::moneyTransfer()
{
    // Placeholder logic, real transfer logic will involve checking other accounts
    qDebug() << "Transferring money from DebitAccount " << accountNum;
}

QString DebitAccount::toFileString() const
{
    return QString("debit %1 %2 %3 %4 %5 %6 %7 %8 %9")
    .arg(cardNum)
        .arg(shabaNum)
        .arg(accountNum)
        .arg(cvv)
        .arg(balance)
        .arg(expireYear)
        .arg(expireMonth)
        .arg(password)
        .arg(secondPassword);
}
