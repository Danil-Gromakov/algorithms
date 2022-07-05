#include <iostream>
#include <string>

class Track
{
    public:
        Track( float lengthInSeconds, std::string trackName )
        {
            m_lengthInSeconds = lengthInSeconds;
            m_trackName = trackName;
        }

    
    private:
        float  m_lengthInSeconds;
        std::string m_trackName;

};


int main()
{
    // create

    Track t(260.0f, "Still Alive");
    std::cout << "Song" << t.m_trackName << std::endl;

    t.m_lengthInSeconds = 12334141.34234325f;
    t.m_trackName = "DUB STEP";


    std::cout << "Song" << t.m_trackName << std::endl;

}