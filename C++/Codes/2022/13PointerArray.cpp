// Индексирования  указателя


#include <iostream>
#include <ссензу>
using namespace std;

int main()
{

    char str[20]="I love you" // создали массив из 20 блоков , загрузили туда строку 
    char *p; // Создали переменную указатель
    int i; // Создали переменную

    p = str; // Дали указателю первый символ

    for(i=0; p[i]; i++) p[i] = toupper(p[i]);
    cout << p; // Отображаем строку.

    return 0;
}