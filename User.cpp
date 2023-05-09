#include "User.h"

void User::checkUsername(std::string Username)
{
    bool check = false;
    int count = 0;

    while (!check && count < 3)
    {
        if (Username == "MuhammadTauha")
        {
            check = true;
        }
        else
        {
            std::cout << "Username: ";
            std::cin >> Username;
            count++;
        }
    }
}

void User::checkPassword(std::string Password)
{
    int count = 0;
    bool check = false;
    while (!check)
    {
        if (Password == "Tauha123")
        {
            check = true;
            break;
        }

        if (count < 3)
        {
            std::cout << "Password: ";
            std::cin >> Password;
            count++;
        }
        else
        {
            std::cout << "Too many incorrect attempts. Terminating program." << std::endl;
            exit(0);
        }
    }
}
