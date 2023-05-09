#include "Store.h"
#include "Products.h"

using namespace std;

void Store::displayProducts()
{
    for (auto item = products.begin(); item != products.end(); item++)
    {

        std::cout << "|" << item->getName() << "\t|\t Rs." << item->getPrice() << "\t|\t Quantity: " << item->getQuantity() << "\t|\t Description: " << item->getDescription() << endl;
    }
}


