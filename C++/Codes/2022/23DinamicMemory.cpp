
#include <iostream>
using namespace std;



int main()
{

    int *p; // указатель
    
    p = new int; // указывет на место в памяти для int
    // p = new int (99); // Инициализируем память числом 99

    *p = 20; // По указателю расположить число

    cout << *p << "\n";

    delete p;

    cout << *p << "\n";


    return 0;
}
