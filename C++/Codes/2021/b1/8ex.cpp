#include <iostream>
#include <iostream>
#include <cstdio>
#include <cctype>

using namespace std;


int main()
{	


// int var1 = 123;
// int var2 = 345;


int var1 = 3;
int var2 = 6;


int *arr[2];

arr[0] = &var1;
arr[1] = &var2;


for (int i = 0; i < 2; ++i)
{	

	
	cout << i <<" - "<< arr[i] <<" -* "<< *arr[i] <<" - "<<(arr[i]+1)<<  endl;

	/* code */
}


	return 0;
}