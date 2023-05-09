//* Always use pointer objects they are easy to use and allocate memory at run time

// We can make a vector named cart in main function which will store all the items. We can access it with from
// supplier account.

// To make an order we can make a pointer object that will point to object of that
// certain item.So when we cancel order original object will not be deleted just
// that pointer object will be deleted

// Regards,
// Ali Haris Chishti
#include "User.h"
#include "Supplier.h"
#include "Products.h"
#include "Store.h"

int main()
{

    Supplier *supp; // Making a pointer object for easy of use

    supp->addProduct("LUX", 130.0, "Bas Zra sa LUX");
    supp->addProduct("Shampoo", 360.0, "Ha Ha Shampoo");
    supp->addProduct("DEW", 75.48, "Do the dew");
}
