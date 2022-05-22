// Запись данных в файл.
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    ofstream out("test");

    if (!out) {
        cout << "Файл не открыт !!!";
        return 1;
    }

    out << 10 << " " << "123 " << "\n";

    out << "test file =)" << "\n";


    out.close();
    
    return 0;
    
}