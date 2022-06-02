// https://docs.microsoft.com/ru-ru/cpp/cpp/virtual-functions?view=msvc-170
#include <iostream>
using namespace std;


class Account {
public:
    Account (  double d ) { _balance = d; }
    virtual ~Account() {}
    virtual double GetBalance() { return _balance; }
    
    // void PrintBalance() { cout << "Checking base account balance: " << GetBalance() << endl; }

    virtual void PrintBalance() { cout << "Checking base account balance: " << GetBalance() << endl; }

private:
    double _balance;
};

class CheckingAccount : public Account {
public:
    CheckingAccount( double d ) : Account(d) { }
    void PrintBalance() { cout << "Checking account balance: " << GetBalance() << endl; }

};

class SavingsAccount : public Account{
public:
    SavingsAccount( double d ) : Account(d) {}
    void PrintBalance() { cout << "Savings account balance: " << GetBalance() << endl; }
};

int main() {

    Account base( 100.00 );
    CheckingAccount checking( 200.00 );
    SavingsAccount  savings( 6666.00 );

    Account *pAccount = &base;
    pAccount->PrintBalance();

    pAccount = &checking;
    pAccount->PrintBalance();

    pAccount = &savings;
    pAccount->PrintBalance();

    return 0;
}