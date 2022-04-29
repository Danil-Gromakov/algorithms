#include <iostream>
#include <cstdlib>
using namespace std;


void progress( int currentPage );

int main(){

    int sample[10]; // Резерв области памяти, это пустой контейнер из 10 позиций 
    int t, minValue;

    // Помещаем в массив значения

    for (t=0;t<10;++t){
        sample[t]=rand();
    }

    // Отобразить массив

    minValue = sample[0]; // Назначить первое в массиве 

    for (t=0;t<10;++t){ // Перебрать массив и сравнить первое со всеми

        if (minValue > sample[t]){
            minValue = sample[t];
        }    
    }

    cout << "minValue: " << minValue << "\n";
    

    return 0;
}
