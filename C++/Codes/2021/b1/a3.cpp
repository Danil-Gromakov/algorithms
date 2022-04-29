#include <iostream>
using namespace std;

void myfunc();


int main()
{


	myfunc();

	return 0;
}

void myfunc(){


	for (int i = 0; i < 20; ++i)
		{
			cout << i << ", ";

			if (i==19){
				cout << "Final ... " << endl;
			}	
		}

}