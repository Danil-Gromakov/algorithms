// 5ex29.cpp
#include <iostream>
using namespace std;
int main()
{
	int numbers[5]{0,100,200,300,400};
	int* pint = numbers;
	int* p2 = &numbers[3];

	cout << "pint = " << pint << ", pint+1 = " << pint+1
		 << ", sizeof(int) = " << sizeof(int) << endl;



	cout << "*(pint+1) = " << *(pint+1)
		<< ", pint[1] = " << pint[1] << endl;
		cout << "*(pint+4) = " << *(pint+4)
		<< ", pint[4] = " << pint[4] << endl;

	cout << "p2 == pint = " << boolalpha << (p2 == pint) << endl;
	cout << "p2 > pint = " << boolalpha << (p2 > pint) << endl;

	cout << "numbers[3] " << numbers[3] << endl;
	cout << "&numbers[3] " << &numbers[3] << endl;
	cout << "*p2 " << *p2 << endl;

	return 0;
}