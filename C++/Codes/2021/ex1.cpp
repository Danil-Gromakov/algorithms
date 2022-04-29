#include <iostream>
using namespace std;

int main()
{

	int* pint = nullptr;
	pint = new int;

	cout << "pint = " << pint << endl;
	delete pint;
	cout << "pint = " << pint << endl;

	pint = new int {123};

	cout << "*pint = " << *pint << endl;
	cout << "pint = " << pint << endl;


	return 0;
}