
#include <iostream>
using namespace std;

int plus_int(int x);

int main()
{

    for (int i = 1; i < 10; i++)
    {
        /* code */
        // cout << "1";
        cout << i << " iter " << plus_int(i) << "\n";
    };
    
    
    return 0;
}

int plus_int(int x)
{
    static int y = 0;

    y+=x;

    return y;
}