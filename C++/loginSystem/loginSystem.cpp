#include <iostream>
#include <fstream>

//prompt
//username
//password
//save file to system to save information
//read file for validation
//success message/failure message

bool isRegistered(std::string username, std::string password)
{
    std::ifstream MyFile;
    MyFile.open("loginData.txt");

    if(MyFile.is_open())
    {
        std::string line;
        while(std::getline(MyFile,line))
        {
            if(line == username)
            {
                return true;
            }
        }
        MyFile.close();
    }
    return false;
}
bool registration()
{ 
    std::string username, password;
    std::cout << "Please enter a username: ";
    std::cin >> username;
    std::cout << "Please enter a password: ";
    std::cin >> password;

    //if user is not already register, save the user/pw to a file
    //otherwise, output message that they already have an account.
    if(isRegistered(username, password))
    {
        std::cout << "An account has already been registered with this username and password.\n";
    }
    else
    {
        std::ofstream MyFile;
        MyFile.open("loginData.txt", std::ios_base::app);

        std::string fileName = username;
        MyFile << fileName << std::endl;
        std::cout << "You have been registered!\n";
        MyFile.close();
        return true;
    }
    return false;
}
bool login()
{
    std::ifstream MyFile;
    MyFile.open("loginData.txt");
    
    std::string username, password;
    std::cout << "Please login\n";
    std::cout << "Please enter a username: ";
    std::cin >> username;
    std::cout << "Please enter a password: ";
    std::cin >> password;

    std::string registered_user = username;   



    if(MyFile.is_open())
    {
        std::string line;
        while(std::getline(MyFile,line))
        {
            if(line == registered_user)
            {
                std::cout << "You have successfully logged in!\n";
                return true;
            }

        }
        MyFile.close();
    }
   return false;
}
void welcome()
{
    int selection;

    std::cout << "1. Register\n";
    std::cout << "2. Login\n";
    std::cout << "Please select an option: ";
    std::cin >> selection;

    if(selection == 1){
        registration();
    }
    else if (selection == 2)
    {
        while(!login())
        {
            std::cout << "You have entered your username or password incorrectly.\n";
        };
    }
    else
    {
        throw std::invalid_argument("Incorrect selection. Try again.");
    }
}

int main()
{
    welcome();
    return 0;
}