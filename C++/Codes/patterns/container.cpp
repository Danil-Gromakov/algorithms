// Arrays example
// Exercise 14: Implementing Containers to Store Usernames
// page 100

# include<iostream>
# include<string>

# define NAME_COUNT 3

int main()
{

    std::string names[NAME_COUNT][2] {""};

    std::cout << "Input Username" << std::endl;


    for (int i=0;i<NAME_COUNT;i++)
    {
        std::cout << "User " << i << " : " << "Forename";
        std::getline(std::cin, names[i][0]);

        std::cout << "User " << i << " : " << "Surname";
        std::getline(std::cin, names[i][1]);

    }

    bool bIsRunning = true;

    while (bIsRunning)
    {
        int userIndex = 0;
        std::string inputString = "";
        std::cout << "Enter user id, -1 quit";
        std::getline(std::cin,inputString);

        // Get Input
        userIndex = std::stoi(inputString);

        // Quit
        if (userIndex == -1)
        {
            bIsRunning = false;
        }
        // Show by index
        else
        {
            if (userIndex < NAME_COUNT)
            {
                std::cout << "User Forename" <<  names[userIndex][0] << std::endl;
                std::cout << "User Surname" <<  names[userIndex][1] << std::endl;
            }
            else
            {
                std::cout << "Invalid user index" << std::endl;
            }
        }


    }


    std::cout << std::size(names) << std::endl;
}
