
#include <iostream>
using namespace std;

int main(){
    try
    {
        /* code */
        throw 43 != 42; // do error
        cout << "no execute";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
    
}