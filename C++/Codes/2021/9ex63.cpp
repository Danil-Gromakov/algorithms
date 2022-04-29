#include <iostream>
#include <string>

using namespace std;

class Track
{
public:
	Track(float lengthInSeconds, string trackName)
	{
		m_lengthInSeconds = lengthInSeconds;
		m_trackName = trackName;
	};

	float m_lengthInSeconds;
	string m_trackName;


	// ~Track();
	
};

int main()
{
	Track t(134.2f,"Danil");

	cout << "My Favourite Song is: " << t.m_trackName << endl;
	
	return 0;
}
