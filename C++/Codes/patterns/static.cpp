// Static example.
#include <iostream>
#include <string>

int func()
{
    static int i = 0;
    return ++i;
}

int main()
{
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << func() << std::endl;
    }
    
}