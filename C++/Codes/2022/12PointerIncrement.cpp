#include <iostream>
using namespace std;

int main()
{
    int *p, num; //указатель на число, и переменная для числа

    p = &num;  // В указатель положили адрес 
    *p=100; // по адресу положили число

    cout << num << " ";

    (*p)++;

    cout << num << " ";

    (*p)--;

    cout << num << "\n";

    return 0;
}