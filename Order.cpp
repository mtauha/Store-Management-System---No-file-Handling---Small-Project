#include "Order.h"
#include <string.h>

using namespace std;

void Orders::addToCart()
{
    Products *product;

    string name, description;
    int quant;
    float price;
    cout << "Enter name of your product: ";
    cin >> name;
    cout << "Enter price for " << product->getName() << ":";
    cin >> price;
    cout << "Enter quantity of " << product->getName() << ":";
    cin >> quant;
    cout << "Describe your product: ";
    cin >> description;

    product->setName(name);
    product->setPrice(price);
    product->setQuantity(quant);
    product->setDescription(description);

    productsOrdered.push_back(*product);
}

void Orders::placeOrder()
{
    cout << "Your order has been placed, Thanks for shopping here" << endl;
}

void Orders::OrderHistory()
{
    for (auto item = productsOrdered.begin(); item != productsOrdered.end(); item++)
    {

        std::cout << "|" << item->getName() << "\t|\t Rs." << item->getPrice() << "\t|\t Quantity: " << item->getQuantity() << "\t|\t Description: " << item->getDescription() << endl;
    }
}

void Orders::CancelOrder()
{
    string app;
    cout << "All of your saved products will be removed. Are you sure you want to proceed??" << endl;
    cin >> app;
    if (strcasecmp(app.c_str(), "yes"))
    {
        productsOrdered.clear();
    }
    else
    {
        exit(EXIT_SUCCESS);
    }
}
