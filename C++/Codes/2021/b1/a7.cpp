#include <iostream>
// #include <cstdio>
// #include <cstring>

using namespace std;

int main()
{	


	char arr[] = "hello world\n";


	cout << "arr: " << arr << endl;

	for (int i = 0; i < 10; ++i)
	{	

		if (i==5)
			{ 
				cout << "space ... " << endl;
				continue;
			}

		cout << arr[i] << "-" << i << endl;


		/* code */
	}

	return 0;
}