#ifndef STORE
#define STORE
#include <iostream>
#include <vector>
#include "Products.h"

class Store
{
public:
    std::vector<Products> products;
    void displayProducts();
};

#endif