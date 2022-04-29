#include <iostream>

using namespace std;

void func1();
void func2();


int var = 1 ;

int main()
{
	

	cout << "var: " << var << endl;

	func1();


	return 0;
}



void func1()
{
	
	cout << "func1: " << ++var << endl;
}