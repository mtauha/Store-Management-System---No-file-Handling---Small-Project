#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <vector>

class User
{
private:
    std::string username;
    std::string password;

public:
    User(std::string username = "", std::string password = "");
    bool authenticate(std::string username, std::string password);
};

class Product
{
private:
    std::string name;
    float price;
    int quantity;
    std::string description;

public:
    Product(std::string name = "", float price = 0, int quantity = 0, std::string description = "");
    void setName(std::string name);
    void setPrice(float price);
    void setQuantity(int quantity);
    void setDescription(std::string description);
    std::string getName();
    float getPrice();
    int getQuantity();
    std::string getDescription();
};

class Order
{
private:
    std::string orderDate;
    std::string customerInfo;
    std::vector<Product> productsOrdered;

public:
    Order(std::string orderDate = "", std::string customerInfo = "");
    void addToCart(Product product);
    void viewCart();
    void placeOrder();
    void cancelOrder();
};

class Payment
{
private:
    std::string paymentMethod;

public:
    Payment(std::string paymentMethod = "");
    void selectPaymentMethod();
    void makePayment();
};

#endif
