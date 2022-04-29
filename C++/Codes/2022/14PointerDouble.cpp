#include <iostream>

using namespace std;

int main()
{

    int x, *p, **q;
    x = 10;
    p = &x;
    q = &p;

    cout << **q; // Выводим значения переменной x

    return 0;
}