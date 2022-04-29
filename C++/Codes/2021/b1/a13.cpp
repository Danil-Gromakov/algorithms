#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{


	if (argc==1){
		cout << "Вы забыли ввести свое имя.\n";
		return 1;
	}

	cout << "Привет, " << argv[1] << '\n';

	return 0;
}