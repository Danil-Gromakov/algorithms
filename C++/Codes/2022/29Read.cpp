// Запись данных в файл.
#include <iostream>
#include <fstream>

using namespace std;


int main(int argc, char const *argv[])
{
    char ch;

    if (argc!=2){
        cout << "script.out FILEPATH";
        return 1;
    }

    ifstream in(argv[1],ios::in | ios::binary);

    if (!in) {
        cout << "can't open file ";
        return 1;

    }

    while(in.get(ch)) cout << ch << "-" ;

    in.close();


    return 0;
}
