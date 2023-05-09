#include <iostream>
#include <string.h>
#include "Products.h"
using namespace std;


void Products ::setName(std::string Name)
{
    this->name = Name;
}

void Products ::setPrice(float Price)
{
    this->price = Price;
}

void Products ::setQuantity(int Quantity)
{
    this->quantity = Quantity;
}

void Products ::setDescription(std::string description)
{
    this->description = description;
}

std::string Products::getName()
{
    return name;
}

float Products::getPrice()
{
    return price;
}

int Products::getQuantity()
{
    return quantity;
}

std ::string Products::getDescription()
{
    return description;
}

Products Products::add()
{
    Products *p1;
    cout << "Enter name of your product: ";
    cin >> p1->name;
    cout << "Enter price for " << p1->name << ":";
    cin >> p1->price;
    cout << "Enter quantity of " << p1->name << ":";
    cin >> p1->quantity;
    cout << "Describe your product: ";
    cin >> p1->description;

    return *p1;
}

void Products::edit(Products *p1, string str)
{
    bool check = true;

    while (check)
    {

        int choice;
        string app;
        cout << "1) Name \t\t\t 2) Description" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            p1->name = str;
            break;
        case 2:
            p1->description = str;
            break;
        }

        cout << "Do you want to edit again??" << endl;
    label:
        cin >> app;

        if (strcasecmp(app.c_str(), "yes") != 0)
        {
            check = false;
        }
        else if (strcasecmp(app.c_str(), "no") != 0)
        {
            check = true;
        }
        else
        {
            cout << "Please write yes/no: ";
            goto label;
        }
    }
}

void Products::edit(Products *p1, float price)
{
    p1->price;
}

void Products::edit(Products *p1, int quantity)
{
    p1->quantity = quantity;
}

void Products::remove()
{
    string check;
    cout << "Are you sure you want to remove this product?" << endl;
    cin >> check;

    if (strcasecmp(check.c_str(), "yes") != 0)
    {
        this->~Products();
    }
    else if (strcasecmp(check.c_str(), "no") != 0)
    {
        cout << "Product is not removed" << endl;
    }
}
