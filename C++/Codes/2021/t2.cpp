#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	char ch;

	do
	{
		cin >> ch;

		ch = ch & 223;

		cout << ch;
		
	} while (ch!='Q');


	return 0;
}