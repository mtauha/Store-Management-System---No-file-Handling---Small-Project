#ifndef USER
#define USER
#include "Person.h"
#include "Order.h"
#include "Products.h"

class User : public Person, public Orders
{
public:
    void checkUsername(std::string Username);
    void checkPassword(std::string Password);
};

#endif