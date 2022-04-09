#include <iostream>
#include <cstdlib>
using namespace std;


void progress( int currentPage );

int main(){

    int numbers[10]; // Резерв области памяти, это пустой контейнер из 10 позиций 
    
    int a,b,t;
    int count;

    count = 10; // Кол-во элементов для сортировки

    // Заполняем массив пустыми числами

    for (int i = 0; i < count; i++)
    {
        numbers[i] = rand();
    }

    // Отобразить массив исходный 

    for (int i = 0; i < count; i++)
    {
        cout << "nosort " << numbers[i] << "\n";
    }
    

    //  Сортировка

    for (a=1; a<count; a++){
        for (b=count-1; b>=a; b--){
            if (numbers[b-1] > numbers[b]){
                // меняем элементы местами

                t = numbers[b-1];
                
                numbers[b-1] = numbers[b];
                numbers[b] = t;
            }
        }    
    }
    
    // Отобразить массив сортированный 

    cout << "***\n";

    for (int i = 0; i < count; i++)
    {
        
        cout << "  sort " << numbers[i] << "\n";
    }
    

    return 0;
}
