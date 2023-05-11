#include "Supplier.h"

using namespace std;

void Supplier::checkUsername(std::string Username)
{
    bool check = false;
    int count = 0;

    while (!check && count < 3)
    {
        if (Username == "Admin")
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

void Supplier::checkPassword(std::string Password)
{
    int count = 0;
    bool check = false;
    while (!check)
    {
        if (Password == "Admin123")
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

void Supplier::addProduct(std::string Name, float Price, std::string Description)
{
    Products product;
    product.setName(Name);
    product.setPrice(Price);
    product.setQuantity(0);
    product.setDescription(Description);

    this->store->products.push_back(product);
}
