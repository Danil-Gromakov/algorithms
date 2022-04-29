#include <iostream>
#include <cstring>
using namespace std;

int main()
{

	int choice;

	cout << "(1) сложить числа или \n";
	cout << "(2) конкатенировать строки?: ";

	cin >> choice;

	if (choice==1)
	{
		/* code */

		int a,b;

		cout << "Введите два числа: ";
		cin >> a >> b;
		cout << "Сумма равна " << a+b << '\n';

	}
	else{
		/* code */

		char s1 [80], s2[80]; /* Активизируются две строки. */
		cout << "Введите две строки: ";
		cin >> s1;
		cin >> s2;
		strcat(s1, s2);
		cout << "Конкатенация равна " << s1 << '\n';
	}

	
	return 0;
}