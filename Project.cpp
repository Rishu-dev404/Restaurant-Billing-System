#include <iostream>
#include <string>
using namespace std;

// Menu data
string itemNames[19] = {"Burger", "Pizza", "Pasta", "Cold Drink", "Ice Cream", "Chaowmin", "Garlic Bread", "Tacos", "Spring Roll", "Momos", "Choco Shake", "Mango Shake", "Cold Coffee", "Oreo Shake", "Samosa", "Dosa", "Idli", "Vada", "Pav Bhaji"};
float itemPrices[19] = {70, 150, 90, 30, 40, 60, 65, 65, 40, 80, 65, 40, 55, 70, 30, 65, 50, 45, 60};

// Function to display menu
void displayMenu() {

    cout << "                              " << endl;
    cout << "       RESTAURANT MENU        " << endl;
    cout << "==============================" << endl;
    for (int i = 0; i < 19; i++) {
        cout << i+1 << ". " << itemNames[i]
             << "\t\t Rs." << itemPrices[i] << endl;
    }
    cout << "==============================" << endl;
}



int main()
{
    int choice;
    do {
        cout << "                              " << endl;
        cout << "       RESTAURANT MENU        " << endl;
        cout << "==============================" << endl;
        cout << "       1. View Menu           " << endl;
        cout << "       2. Order Food          " << endl;
        cout << "       3. Exit Menu           " << endl;
        cout << "==============================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                displayMenu();
                break;
            case 2:
                cout << "Exiting the menu. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 2);
    return 0;
}