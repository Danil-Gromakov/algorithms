
#include <iostream>
using namespace std;


double &f();
double val = 100.0;



int main()
{
    
    double newval;

    cout << f() << "\n"; 

    newval = f();

    cout << newval << "\n"; 

    f() = 99.1; // Изменяем значение val.
    cout << f() << "\n"; // Отображаем новое значение val.

    return 0;
}

double &f(){
    return val;
}
