#include <iostream>
using namespace std;

int main()
{
    int t, i;
    char text[100][80];

    cout << "Q" << " - exit" << "\n";

    for(t=0; t<100; t++) {
       cout << t << ": ";
        cin >> text[t];

        
        if(text[t][0] == 'Q') { 
            break; // Выход из цикла по пустой строке.
            }
        }
    // Отображение строк на экране.
    for(i=0; i<t; i++)
        cout << text[i] << " \n";
    
    
    return 0;
}