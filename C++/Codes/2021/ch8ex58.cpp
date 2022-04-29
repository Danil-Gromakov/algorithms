#include <iostream>
#include <string>

using namespace std;

class Track
{
public:


	int m_number;
	string m_name;

	Track( int number, string name ){

		m_number = number;
		m_name = name;
	}
	~Track(){ cout << "destr" << endl; }
	
};

int main(int argc, char const *argv[])
{
	Track track(123, "hello world 1");

	cout << "Track Name = " << track.m_name << endl;
	cout << "Track Length = " << track.m_number << endl;

	return 0;
}