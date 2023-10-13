/*All the banks operating in India are controlled by RBI. RBI has set a well defined guideline (e.g. minimum interest rate, minimum balance allowed, 
maximum withdrawal limit etc) which all banks must follow. For example, suppose RBI has set minimum interest rate applicable to a saving bank account
to be 4% annually; however, banks are free to use 4% interest rate or to set any rates above it. Write a program to implement bank functionality
in the above scenario. Note: Create few classes namely Customer, Account, RBI (Base Class) and few derived classes (SBI, ICICI, PNB etc). 
Assume and implement required member variables and functions in each class.*/


#include<iostream>
#include<string>
using namespace std;

class RBI
{
  protected: 
  int mininterestRate;
  public:
  RBI(int rate=0) : mininterestRate(rate) {}

  void setMinInterestRate(int rate)
  {
    mininterestRate=rate;
  }
  int getMinInterestRate()
  {
    return mininterestRate;
  }
};
class Customer
{
   protected:
   string name;
   string address;
   public:
   Customer(string n=" ",string addr=" ") : name(n), address(addr) {}
   string getName()
   {
    return name;
   }
   string getAddress()
   {
    return address;
   }
};
class Account 
{
  protected:
  long int accountNumber;
  long int balance;
  public:
  Account(long int accNum=0,long int bal=0) : accountNumber(accNum),balance(bal) {}
  long int getAccountNumber()
  {
    return accountNumber;
  }
  long int getBalance()
  {
    return balance;     
  }
  virtual void calculateInterest(RBI& rbi) = 0;
};
class SBI: public Account 
{
  public:
  SBI(long int accNum,long int bal) : Account(accNum , bal) {}
  
};
class ICICI: public Account
{
  public:
  ICICI(long int accNum,long int bal) : Account(accNum , bal) {}
};
class PNB: public Account
{ 
  public:
  PNB(long int accNum,long int bal) : Account(accNum , bal) {}
};