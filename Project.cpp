#include <iostream>
#include <string>
using namespace std;

// Menu data
string itemNames[5] = {"Burger", "Pizza", "Pasta", "Cold Drink", "Ice Cream"};
float itemPrices[5] = {50, 120, 90, 30, 40};

// Function to display menu
void displayMenu()
{
    cout << "===== RESTAURANT MENU =====" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". " << itemNames[i]
             << " - Rs." << itemPrices[i] << endl;
    }
    cout << "===========================" << endl;
}

int main()
{
    displayMenu();
    return 0;
}