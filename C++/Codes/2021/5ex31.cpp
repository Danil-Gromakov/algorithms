#include <iostream>
using namespace std;
int main()
{
	char* alphabet[26]
		{
		"alpha",
		"bravo",
		"charlie",
		"delta",
		"echo",
		"foxtrot"
		};

	char const** p;
	
	for (char **p = alphabet; *p != nullptr; ++p)
	{
		cout << *p << " ";
	}

cout << endl;
return 0;
}