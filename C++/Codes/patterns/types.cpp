#include<iostream>

int main(int argc, char const *argv[])
{
    int customerAges [5] = {1,2,3,4,5};

    std::cout << customerAges[0] << std::endl;
    std::cout << customerAges[1] << std::endl;
    std::cout << customerAges[2] << std::endl;
    std::cout << customerAges[3] << std::endl;
    std::cout << customerAges[4] << std::endl;

    std::cout << "sizeof " << sizeof(customerAges) << std::endl;
    std::cout << "sizeof " << sizeof(customerAges[0]) << std::endl;
    std::cout << "sizeof " << std::size(customerAges) << std::endl;

    return 0;
}
