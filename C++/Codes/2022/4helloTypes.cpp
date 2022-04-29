#include <iostream>

using namespace std;

/* Эта программа демонстрирует различие
unsigned-значениями целочисленного типа.
между
signed-
и
*/


int main(){

    short int i; // короткое значение со знаком
    short unsigned j; // короткое значение со знаком

    j = 60000;
    i = j;

    cout << i <<"  "<< j;

    return 0;
}

