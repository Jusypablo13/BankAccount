#include "Bank.h"
#include <iostream>
using namespace std;

int main(){
    Bank bank;

    bank.addAccount("aa12", 100);
    cout << "Initial balance: " << bank.getBalance("aa12") << endl;

    int status = bank.addBalance("aa12", 800);
    if (status == 0) {
        cout << "Deposit successful. ";
    } else {
        cout << "Deposit failed. ";
    }
    cout << "New balance: " << bank.getBalance("aa12") << endl;

    return 0;
}