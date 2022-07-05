/* 
Resource Acquisition Is Initialization (RAII)
Class instances that own pointers to dynamic variables and delete the dynamic
variables when the instance is destroyed are one instance of a broader idiom, where a
class instance acquires some resource, owns that resource, and releases the resource
when the class instance is destroyed. This idiom is called RAII (Resource Acquisition
Is Initialization).
*/ 

#include <iostream>


class noisy
{
private:
    char const* s_;
    
public:
    noisy( char const* s)
    {
        std::cout << "constructing " << s << std::endl;
        // Наделить значением аргумента 
        s_= s;
    }
    ~noisy()
    {
        std::cout << "destroying " << s_ << std::endl;
    }
};


void func (char const* s)
{
    noisy func(s);
};

noisy f("global 1");
noisy ff("global 2");

int main()
{

    noisy n1("main() function local 1");
    func("function local 2");

    {
        noisy n("block local");
        func("function local 3");
    }
        
    return 0;

}