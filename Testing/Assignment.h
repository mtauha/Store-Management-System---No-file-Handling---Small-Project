#ifndef ASSIGNMENT
#define ASSIGNMENT
#include <iostream>
#include <vector>

class Product
{
private:
    std::string name;
    double price;
    int quantity;
    std::string description;

public:
    Product(const std::string &name, double price, int quantity, const std::string &description)
        : name(name), price(price), quantity(quantity), description(description) {}

    double getPrice() const;

    std::string getName() const;
};

class ProductManager
{
private:
    std::vector<Product> products;

public:
    void addProduct(const Product &product);
    void removeProduct(const std::string &productName);
    void displayProducts();
};

class Order
{
private:
    int id;
    std::string date;
    std::string customerInfo;
    std::vector<Product> products;

public:
    Order(int id, const std::string &date, const std::string &customerInfo, const std::vector<Product> &products)
        : id(id), date(date), customerInfo(customerInfo), products(products) {}

    int getId() const;
    std::string getDate() const;
    std::string getCustomerInfo() const;
};

class OrderManager
{
private:
    std::vector<Order> orders;

public:
    void placeOrder(const Order &order);
    void cancelOrder(int orderId);
    void viewOrderHistory();
};

void MainWindow();

#endif