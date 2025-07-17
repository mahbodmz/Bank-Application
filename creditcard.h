#ifndef CREDITCARD_H
#define CREDITCARD_H
#include <string>
#include <QString>

class CreditCard
{
protected:
    long long cardNum;
    long long shabaNum;
    long long accountNum;
    int cvv;
    double balance;
    int expireYear;
    int expireMonth;
    QString password;
    QString secondPassword;
public:
    CreditCard();

    CreditCard(long long cardNum , long long shabaNum ,long long accountNum,int cvv,double balance,int expireYear,int expireMonth,QString password,QString secondPassword);


    virtual ~CreditCard();

    long long getcardNum ();
    long long getshabaNum ();
    long long getaccountNum ();
    int getcvv ();
    double getbalance ();
    int getexpireYear ();
    int getexpireMonth();
    QString getpassword ();
    QString getsecondPassword ();

    virtual void moneyTransfer() = 0;

    virtual QString toFileString() const = 0;


};

#endif // CREDITCARD_H
