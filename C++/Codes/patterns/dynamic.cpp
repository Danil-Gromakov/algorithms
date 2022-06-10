#include <iostream>


int main(int argc, char const *argv[])
{
	int *pint = nullptr;
	pint = new int;

	std::cout << "pint = " << pint << std::endl;

	std::cout << "*pint = " << *pint << std::endl;

	std::cout << "delete pint;" << std::endl; 
	delete pint;


	std::cout << "pint = " << pint << std::endl;

	std::cout << "*pint = " << *pint << std::endl;

	pint = new int {33333};

	std::cout << "pint = " << pint << std::endl;

	std::cout << "*pint = " << *pint << std::endl;



	std::cout << "delete pint;" << std::endl; 
	delete pint;


	return 0;
}