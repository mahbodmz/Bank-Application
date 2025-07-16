#ifndef CREDITCARD_H
#define CREDITCARD_H
#include <string>
#include <QString>

class CreditCard
{
protected:
    int cardNum;
    int shabaNum;
    int accountNum;
    int cvv;
    float balance;
    int expireYear;
    int expireMonth;
    QString password;
    QString secondPassword;
public:
    CreditCard();

    CreditCard(int cardNum , int shabaNum ,int accountNum,int cvv,float balance,int expireYear,int expireMonth,QString password,QString secondPassword);


    virtual ~CreditCard();

    int getcardNum ();
    int getshabaNum ();
    int getaccountNum ();
    int getcvv ();
    float getbalance ();
    int getexpireYear ();
    int getexpireMonth();
    QString getpassword ();
    QString getsecondPassword ();

    virtual void moneyTransfer() = 0;

    virtual QString toFileString() const = 0;


};

#endif // CREDITCARD_H
