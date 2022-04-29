#include <iostream>
#include <cstdlib>

using namespace std;

int mul ( int x, int y ); // Прототип функции
 
int main(){

    int answer;

    answer = mul(10,20);
  
    cout << "Ответ равен : " << answer;

    return 0;
}


int mul( int x, int y){

    return x * y;

}
