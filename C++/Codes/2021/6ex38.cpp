#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;

int main()

{
	int a = 10;
	char b = '20';
	cout << typeid(b).name() << endl;
	return 0;
}