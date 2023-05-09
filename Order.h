#ifndef ORDERS
#define ORDERS
#include <vector>
#include "Products.h"
#include "Person.h"

class Orders
{
    private:
        std:: string order_date;
        std:: vector<Person> customerInfo;
    
    public:
        std::vector<Products> productsOrdered;
        void addToCart();
        void placeOrder();
        void OrderHistory();
        void CancelOrder();
};

#endif