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
        }

        float getLength()
        {
            return m_lengthInSeconds;
        }

        string getName()
        {
            return m_trackName;
        }

        void setName(string newName)
        {
            m_trackName = newName;
        }


    private:
        float m_lengthInSeconds;
        string m_trackName;

};



int main()
{
    // create

    Track t(260.0f, "Still Alive");

    std::cout << "Name song" << t.getName() << std::endl;
    std::cout << "Length song" << t.getLength() << std::endl;

    t.setName("3 september song");

    std::cout << "Name song" << t.getName() << std::endl;

}
