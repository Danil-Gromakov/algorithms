#include <iostream>
#include <ctime>

using namespace std;

unsigned int i; //не register-переменная
unsigned int delay;

int main()
{
	register unsigned int j;
	long start, end;
	
	start = clock();
	
	for(delay=0; delay<50; delay++)
	{
		for(i=0; i<64000000; i++);
	}
	
	
	end = clock();
	
	cout << "Количество тиков для не register-цикла: ";
	cout << end-start << ' \n';
}