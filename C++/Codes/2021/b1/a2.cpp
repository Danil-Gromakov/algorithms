#include <iostream>

using namespace std;

void myfunc();


int main()
{

	cout << "main start ... \n";

	myfunc();

	cout << "main continue ... \n";

	return 0;
}

void myfunc(){

	int v;

	cout << "Enter name: ";
	
	cin >> v;

	cout << "hello "<< v << endl;
}