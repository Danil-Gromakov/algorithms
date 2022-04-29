#include <iostream>
using namespace std;

int main(){ 
	
	int i = 12345;
	int *p = &i;

	cout << "p = " << p << ", &i = " << i << endl;
	
	*p = *p +2;

	cout << "p = " << p << ", &i = " << i << endl;
	
	i = i +2;

        cout << "p = " << p << ", &i = " << i << endl;

	
	cout << "ok" << endl;	
	return 0;
}
