#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */

	int *p1 = nullptr;
	
	cout << "p1 = " << p1 << endl;
	
	*p1 = 22;

	return 0;
}