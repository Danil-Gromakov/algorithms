#include <iostream>
using namespace std;

void f(int *j);

int main()
{

	int i = 123;
	int *p;
	// p = &i;

	f(&i);


	cout << i;

	return 0;
}


void f(int *j)
{
	*j = 100;
}