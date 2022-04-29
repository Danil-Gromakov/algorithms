#include <iostream>
using namespace std;

int main(){

    int gallons, liters; // Объявить переменную

    cout << "Введите количество галонов ";

        cin >> gallons; // Ввод данных пользователя
    
    liters = gallons * 4; // Преобразовать в литры
 
    cout << "Литров " << liters << "\n"; // Отобразить x в консоль

    return 0;
}