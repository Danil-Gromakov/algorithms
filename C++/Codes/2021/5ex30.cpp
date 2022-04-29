#include <iostream>
using namespace std;

int main()
{

	int a[5]{10,20,30,40,50};
	int *p;

	// cout << p << endl;

	// cout << &a[1] << endl;

	for (p=&a[0]; p < &a[5];p=p+1)
	{

		cout << "*p  "<< *p << " p  "<< sizeof(p) << endl;
	}

 return 0;
}