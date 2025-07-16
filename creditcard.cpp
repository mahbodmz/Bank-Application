#include "creditcard.h"

CreditCard::CreditCard() {}

CreditCard::CreditCard(int cardNum, int shabaNum, int accountNum, int cvv, float balance,
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


int CreditCard::getcardNum(){
    return cardNum;
}

int CreditCard::getshabaNum(){
    return shabaNum;
}

int CreditCard::getaccountNum(){
    return accountNum;
}

int CreditCard::getcvv(){
    return cvv;
}

float CreditCard::getbalance(){
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
