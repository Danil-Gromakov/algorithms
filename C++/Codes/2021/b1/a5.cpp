#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{

	int sample[10];

// запись
	for (int i = 0; i < 10; ++i) sample[i]=rand();
// show
	for (int i = 0; i < 10; ++i)
	{
		cout << sample[i] << " ";
	}


	return 0;
}