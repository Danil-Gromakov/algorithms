#include <iostream>
using namespace std;

int main(){

	// int gallons, liters;
	double gallons, liters;


	cout << "Enter data: ";
	cin >> gallons;

	liters = gallons*3.7854;

	cout << gallons << " gallons = " << liters << " liters" << endl;
	
	return 0;
}