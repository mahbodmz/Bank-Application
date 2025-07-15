#include "creditcard.h"

CreditCard::CreditCard() {}

CreditCard::CreditCard(int cardNum , int shabaNum ,int accountNum,int cvv,int balance,int expireYear,int expireMonth,QString password,QString secondPassword) {
    cardNum(cardNum);
    shabaNum(shabaNum);
    accountNum(accountNum);
    cvv(cvv);
    balance(balance);
    expireYear(expireYear);
    expireMonth(expireMonth);
    password(password);
    secondPassword(secondPassword);
}

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

int CreditCard::getbalance(){
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
