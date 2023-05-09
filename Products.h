#ifndef PRODUCTS
#define PRODUCTS
#include <iostream>

class Products
{
private:
    std::string name;
    float price;
    int quantity;
    std::string description;

public:
    void setName(std::string Name);
    void setPrice(float Price);
    void setQuantity(int Quantity);
    void setDescription(std::string description);
    std::string getName();
    float getPrice();
    int getQuantity();
    std ::string getDescription();

    Products add();
    void edit(Products*,std::string);
    void edit(Products*, float);
    void edit(Products*, int);
    void remove();
};

#endif