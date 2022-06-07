#include <iostream>
using namespace std;

int main()
{

int a[]{ 10, 20, 30, 40, 50 };
int* p;

p = a;

std::cout << *p << std::endl;
++p;
std::cout << *p << std::endl;
++p;
std::cout << *p << std::endl;
++p;
std::cout << *p << std::endl;
++p;
std::cout << *p << std::endl;
++p;
std::cout << *p << std::endl;

std::cout << sizeof(a[0]) << std::endl;
std::cout << a+5 << std::endl;


for (p = a; p < a + sizeof(a)/sizeof(a[0]); ++p)
{
    cout << *p << " ";
}
    cout << endl;

char const* alphabet[26]
{
"alpha",
"bravo",
"charlie",
"delta",
"echo",
"foxtrot"
};

for (char const** p = alphabet; *p != nullptr; ++p)
{
cout << *p << " ";
}
cout << endl;




int i = 10;
int & ir = i;
i = i + 10;
ir = ir * 10;
int *ip = & ir;

cout << "ir = " << ir << endl;
cout << "i = " << i << endl;
cout << "ip = " << ip << endl;
cout << "*ip = " << *ip << endl;

    return 0;    
}
