#include <iostream>
#include <string.h>
#include <vector>
#include "User.h"
#include "Supplier.h"
#include "Store.h"
using namespace std;

void MarketPlace()
{
    Store store;

    int choice;
    string username, password;
    cout << "Do you want to login as user or supplier: " << endl;
    cout << "1)User \t\t 2)Supplier";
    cin >> choice;
    switch (choice)
    {
    case 1:
        User *user;

        cout << "****************************** Welcome to store ******************************\n\n"
             << endl;
        cout << "Username: " << endl;
        cin >> username;
        cout << "Password: " << endl;
        cin >> password;

        user->checkUsername(username);
        user->checkPassword(password);

        cout << "****************************** Welcome back Muhammad ******************************\n\n"
             << endl;

        cout << "Our store has: " << endl;
        store.displayProducts();

        cout << "\n\n\nEnter your choice: " << endl;

        break;
        case 2:
        Supplier *supplier;

        cout << "****************************** Welcome to Store ******************************" << endl;
        cout << "Username: " << endl;
        cin >> username;
        cout << "Password: " << endl;
        cin >> password;

        supplier->checkUsername(username);
        supplier->checkPassword(password);                                                                                                                               

        break;
    }
}

void UserInterface(User u1)
{
    int choice;

    cout << "Please enter your choice: " << endl;
    if (u1.productsOrdered.empty())
    {
        cout << "1)Add item \t\t 2)Exit User Interface" << endl;
    label:
        cin >> choice;

        switch (choice)
        {
        case 1:
            u1.addToCart();
            break;
        case 2:
            exit(EXIT_SUCCESS);

        default:
            cout << "Please Enter correct choice: ";
            goto label;
            break;
        }
    }
    else
    {

        cout << "Please enter your choice: " << endl;
        cout << "1)Add to cart \t\t 2)Cancel Order \n 3)Order History" << endl;
    Label:
        cin >> choice;

        switch (choice)
        {
        case 1:
            u1.addToCart();
            break;
        case 2:
            u1.CancelOrder();
            break;
        case 3:
            u1.OrderHistory();
            break;

        default:
            cout << "Please Enter correct option: ";
            goto Label;
            break;
        }
    }
}