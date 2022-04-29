
#include <iostream>
using namespace std;

void swap( int *x, int *y );

int main()
{
    int i,j;
    i = 10;
    j = 20;

    cout << "i " << i << "j " << j;


    swap(&i, &j);

    cout << "i " << i << "j " << j;

    return 0;
}

void swap( int *x, int *y ){

    int temp;

    temp = *x; // Временно сохраняем значение, расположенное по адресу х.
    *x = *y; // Помещаем значение, хранимое по адресу у, в адрес х.
    *y = temp; // Помещаем значение, которое раньше хранилось по адресу х, в адрес у.

}
