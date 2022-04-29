#include <iostream>
using namespace std;

int main()
{
    int balance;
    int *balptr;
    int value;


    balance = 3200;

    balptr = &balance; // Адрес

    value = *balptr; // Значение по адресу


    cout << "Баланс равен:" << value <<'\n';

    return 0;
}