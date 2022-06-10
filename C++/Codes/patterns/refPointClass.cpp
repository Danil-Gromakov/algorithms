#include <iostream>


struct mydata
{
	char const* name_;
	bool hero_;
};

mydata heroes[]{
	
	{ "White Spider Man", true },
	{ "Black Spider Man", true },
	{ "Red Spider Man", true },
	{ "Yellow Spider Man", false },
};


void prtntdata(mydata *p)
{
	std::cout << "Hello. I am " << (*p).name_ << ". -> ";

	if (p->hero_)
	{
		std::cout << "Herro" << std::endl;
	}
	else
	{
		std::cout << "No hero" << std::endl;	
	}
};



int main(int argc, char const *argv[])
{

	std::cout << sizeof(mydata) << " " << sizeof(mydata*) << std::endl;


	for (mydata* p = heroes; p < heroes + 6; ++p)
	{
		prtntdata(p);
	}	

	return 0;
}