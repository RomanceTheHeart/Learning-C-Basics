#pragma once 
#include <iostream>
#include "Header_Files/Account.h"

class Savings_Account : public Account 
{
    public:
    Savings_Account(); 
    ~Savings_Account(); 

    void Deposit(double amount); 
    void Withdraw(double amount); 

};

Savings_Account::Savings_Account()
{

}

Savings_Account::~Savings_Account()
{

}

void Savings_Account::Deposit(double amount)
{
   std::cout << "Savings Account deposit called with" << amount << std::endl;
}

void Savings_Account::Withdraw(double amount)
{
       std::cout << "Savings Account withdraw called with" << amount << std::endl;

}