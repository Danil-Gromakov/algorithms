// Vector example

#include <iostream>
#include <string>
#include <vector>

std::vector<int> myVector {1,2,3,4,5,6};

void PrintVector()
{


    myVector.push_back(10);
    // myVector.pop_back();

    for (int i=0;i<myVector.size();++i)
    {
        std::cout << myVector[i] << " ";

    }

    std::cout << "\n\n";
}

int main()
{
    PrintVector();
}