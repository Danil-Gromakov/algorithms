#include <iostream>
using namespace std;


void strShow(char *str);

int main()
{
	char str[80];

	cout << "Input str: ";
	cin >> str;

	strShow(str);



	cout <<"final: "<< str << endl;


}


void strShow(char *str)
{
	while(*str)
	{

		cout <<" - "<< *str <<" - "<< str << endl;

		str++;
	}

}