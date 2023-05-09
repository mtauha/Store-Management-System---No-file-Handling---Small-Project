#ifndef SUPPLIER
#define SUPPLIER
#include "Person.h"
#include "Store.h"


class Supplier:public Person
{
public:
    void checkUsername(std::string Username);
    void checkPassword(std::string Password);
    void addProduct(std::string, float, std::string);
    Store *store;
};



#endif