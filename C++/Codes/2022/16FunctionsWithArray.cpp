// В C++ разрешается передавать функции указатели. 

#include <iostream>
using namespace std;


void f( int *j);

int main()
{

    int i = 12;


    f(&i); // В функции аргумент - адрес 

    cout << i; // переменная теперь содержит 100

    return 0;
}

void f (int *j){

    // по адресу назначь значение 
    *j = 100;
}