#include <iostream>
#include <cstdlib>

using namespace std;


void myfunc(); // прототип  функции


int main(){

    int gallons, liters; // Объявить переменную

    myfunc(); // Вызываем функцию

    cout << "Введите количество галонов ";

        cin >> gallons; // Ввод данных пользователя
    
    liters = gallons * 4; // Преобразовать в литры
 
    cout << "Литров " << liters << "\n"; // Отобразить x в консоль

    return 0;
}

void myfunc(){
    cout << "В функции myfunc().\n";
}