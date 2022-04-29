#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{	

	int larr = 7;

	char str[larr] = "Hello";

	for (int i = 0; i < larr; ++i)
	{
		cout << i <<" - "<<str[i] << endl;
	}

	return 0;
}