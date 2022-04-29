// Пример использования инициализации переменных.
#include <iostream>
using namespace std;

void total( int x );  

int main(){

    int v;
    
    cin >> v;

    total(v);

    return 0;
}

void total( int x) {

    int sum = 0;
    int i, count;

    for (i=1;i<=x;i++){
        sum = sum + i;

        cout <<  "..." << sum << "\n";

    }

}

