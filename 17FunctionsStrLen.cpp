
#include <iostream>
using namespace std;

int mystrlen( char *str); 


int main()
{
    char mystr[] = "Строка пример ПРИВЕТ МИР ";

    cout << "Длина строки: " << mystr << " == " << mystrlen(mystr) << "\n";

    

    return 0;
}

int mystrlen (char *str){

    int i;

    for (i=0; str[i]; i++ ); // Найти конец строки 

    return i;
}