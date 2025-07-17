#include "creditcard.h"

CreditCard::CreditCard() {}

CreditCard::CreditCard(long long cardNum, long long shabaNum, long long accountNum, int cvv, double balance,
                       int expireYear, int expireMonth, QString password, QString secondPassword)
{
    this->cardNum = cardNum;
    this->shabaNum = shabaNum;
    this->accountNum = accountNum;
    this->cvv = cvv;
    this->balance = balance;
    this->expireYear = expireYear;
    this->expireMonth = expireMonth;
    this->password = password;
    this->secondPassword = secondPassword;
}

CreditCard::~CreditCard() {}


long long CreditCard::getcardNum(){
    return cardNum;
}

long long CreditCard::getshabaNum(){
    return shabaNum;
}

long long CreditCard::getaccountNum(){
    return accountNum;
}

int CreditCard::getcvv(){
    return cvv;
}

double CreditCard::getbalance(){
    return balance;
}

int CreditCard::getexpireYear(){
    return expireYear;
}

int CreditCard::getexpireMonth(){
    return expireMonth;
}

QString CreditCard::getpassword(){
    return password;
}

QString CreditCard::getsecondPassword(){
    return secondPassword;
}
