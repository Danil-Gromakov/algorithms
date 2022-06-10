#include <iostream>

// https://hackingcpp.com/cpp/lang/custom_type_basics.html

class noisy
{
private:
    /* data */
    int i_;
public:
    noisy(int i) : i_(i)
    {
        std::cout << "do noisy " << i << std::endl;

    }
    ~noisy()
    {
        std::cout << "dest noisy " << i_ << std::endl;
    }
};




int main(){

    noisy N(1);
    noisy *p = new noisy(2);
    delete p;
    return 0;
}