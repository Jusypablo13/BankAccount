#include <iostream>
#include <vector>
#include <string>

using namespace std;

#ifndef BANK_H_
#define BANK_H_

class Bank{
    private:
        struct BankAccount{
            string accountNumber;
            double balance;
        };

        vector<BankAccount> accounts;

        int findAccountIndex(string accountNumber);

    public:
        void addAccount(string accountNumber, double initialBalance);
        int addBalance(string accountNumber, double balance);
        void restAccount(string accountNumber, double initialBalance);
        double getBalance(string accountNumber);

};

#endif