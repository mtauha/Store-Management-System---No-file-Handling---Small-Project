#include "Assignment.h"


// Product Class Implementation:

double Product::getPrice() const
{
    return price;
}

std::string Product::getName() const
{
    return name;
}

// Product Manager Implementation:

void ProductManager:: addProduct(const Product &product)
{
    products.push_back(product);
    std::cout << "Product added successfully." << std::endl;
}

void ProductManager::removeProduct(const std::string &productName)
{
    for (auto it = products.begin(); it != products.end(); ++it)
    {
        if (it->getName() == productName)
        {
            products.erase(it);
            std::cout << "Product removed successfully." << std::endl;
            return;
        }
    }
    std::cout << "Product not found." << std::endl;
}

void ProductManager::displayProducts()
{
    if (products.empty())
    {
        std::cout << "No products available." << std::endl;
    }
    else
    {
        std::cout << "Available products:" << std::endl;
        for (const auto &product : products)
        {
            std::cout << "- " << product.getName() << ", Price: " << product.getPrice() << std::endl;
        }
    }
}


// Order Class Implementation:

int Order:: getId() const
{
    return id;
}

std::string Order::getDate() const
{
    return date;
}

std::string Order::getCustomerInfo() const
{
    return customerInfo;
}


// Order Manager Implementation:

void OrderManager:: placeOrder(const Order &order)
{
    orders.push_back(order);
    std::cout << "Order placed successfully." << std::endl;
}

void OrderManager::cancelOrder(int orderId)
{
    for (auto it = orders.begin(); it != orders.end(); ++it)
    {
        if (it->getId() == orderId)
        {
            orders.erase(it);
            std::cout << "Order canceled successfully." << std::endl;
            return;
        }
    }
    std::cout << "Order not found." << std::endl;
}

void OrderManager::viewOrderHistory()
{
    if (orders.empty())
    {
        std::cout << "No orders available." << std::endl;
    }
    else
    {
        std::cout << "Order history:" << std::endl;
        for (const auto &order : orders)
        {
            std::cout << "- Order ID: " << order.getId()
                      << ", Date: " << order.getDate()
                      << ", Customer Info: " << order.getCustomerInfo()
                      << std::endl;
        }
    }
}


// Main Window Implementation

void MainWindow(){
    ProductManager productManager;
    OrderManager orderManager;

    int choice;
    std::string productName;
    double productPrice;
    int productQuantity;
    std::string productDescription;

    int orderId;
    std::string orderDate;
    std::string customerInfo;
    std::vector<Product> orderProducts;

    while (true)
    {
        std::cout << "\n==== Online Store Management System ====" << std::endl;
        std::cout << "1. Add Product" << std::endl;
        std::cout << "2. Remove Product" << std::endl;
        std::cout << "3. Display Available Products" << std::endl;
        std::cout << "4. Place Order" << std::endl;
        std::cout << "5. Cancel Order" << std::endl;
        std::cout << "6. View Order History" << std::endl;
        std::cout << "7. Exit" << std::endl;

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "\nEnter product details:" << std::endl;
            std::cout << "Name: ";
            std::cin >> productName;
            std::cout << "Price: ";
            std::cin >> productPrice;
            std::cout << "Quantity: ";
            std::cin >> productQuantity;
            std::cout << "Description: ";
            std::cin.ignore();
            std::getline(std::cin, productDescription);

            productManager.addProduct(Product(productName, productPrice, productQuantity, productDescription));
            break;
        case 2:
            std::cout << "\nEnter the name of the product to remove: ";
            std::cin >> productName;

            productManager.removeProduct(productName);
            break;
        case 3:
            std::cout << "\nAvailable products:" << std::endl;
            productManager.displayProducts();
            break;
        case 4:
            std::cout << "\nEnter order details:" << std::endl;
            std::cout << "Order ID: ";
            std::cin >> orderId;
            std::cout << "Order Date: ";
            std::cin >> orderDate;
            std::cout << "Customer Info: ";
            std::cin.ignore();
            std::getline(std::cin, customerInfo);

            orderProducts.clear();
            while (true)
            {
                std::cout << "Add product to the order (Y/N): ";
                char addProductChoice;
                std::cin >> addProductChoice;

                if (addProductChoice == 'Y' || addProductChoice == 'y')
                {
                    std::cout << "Enter product name: ";
                    std::cin >> productName;
                    orderProducts.push_back(Product(productName, 0, 0, ""));
                }
                else
                {
                    break;
                }
            }

            orderManager.placeOrder(Order(orderId, orderDate, customerInfo, orderProducts));
            break;
        case 5:
            std::cout << "\nEnter the ID of the order to cancel: ";
            std::cin >> orderId;

            orderManager.cancelOrder(orderId);
            break;
        case 6:
            std::cout << "\nOrder history:" << std::endl;
            orderManager.viewOrderHistory();
            break;
        case 7:
            std::cout << "\nThank you for using the Online Store Management System. Goodbye!" << std::endl;
            exit(EXIT_SUCCESS);
        default:
            std::cout << "\nInvalid choice. Please try again." << std::endl;
            break;
        }
    }
}