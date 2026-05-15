#ifndef RESTURANT_H
#define RESTURANT_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void printpadded(string text, int width)
{
    cout << left << setw(width) << text;
}

class Menu{
    public:
        string itemnames[19]={"Burger", "Pizza", "Pasta", "Cold Drink", "Ice Cream",
        "Chaowmin", "Garlic Bread", "Tacos", "Spring Roll", "Momos",
        "Choco Shake", "Mango Shake", "Cold Coffee", "Oreo Shake",
        "Samosa", "Dosa", "Idli", "Vada", "Pav Bhaji"};

        float itemprices[19]={ 70, 150, 90, 30, 40, 60, 65, 65, 40, 80,
        65, 40, 55, 70, 30, 65, 50, 45, 60};

        int totalitems=19;

        void displaymenu(){
            cout<<"===================================="<<endl;
            cout<<"              MENU ITEMS            "<<endl;
            cout<<"===================================="<<endl;
            for(int i=0; i<totalitems; i++){
                cout << i + 1 << ". "<< left << setw(26) << itemnames[i]<< "Rs." << itemprices[i] << endl;
                
            }
            cout<<"===================================="<<endl;
        }
};
class order{
    private:
        string ordereditems[50];
        float orderedprices[50];
        int count;
    public:
        order(){
            count=0;
        }

        void takeorder(Menu m){
            m.displaymenu();
            int choice;
            char more;

            do{
                cout << "Enter the item number you want to order: ";
                cin >> choice;
                if(choice>=1 && choice<=m.totalitems){
                    ordereditems[count]=m.itemnames[choice-1];
                    orderedprices[count]=m.itemprices[choice-1];
                    count++;
                }
                else{
                    cout << "Invalid choice. Please try again." << endl;
                }
                cout << "Do you want to order more items? (y/n): ";
                cin >> more;
            }while(more=='y' || more=='Y');
        }

        void genrateBill(){
            if (count == 0) {
                cout << "No items ordered. Thank you for visiting!" << endl;
                return;
            }

            float total=0;
            cout<<"===================================="<<endl;
            cout<<"              BILL                  "<<endl;
            cout<<"===================================="<<endl;
            for(int i=0; i<count; i++){
                printpadded(ordereditems[i], 18);
                cout << "Rs." << orderedprices[i] << endl;
                total += orderedprices[i];
            }
            cout<<"===================================="<<endl;
            printpadded("Total", 18);
            cout << "Rs." << total << endl;
            cout<<"===================================="<<endl;
            cout << "Thank you for your order! Please visit again!" << endl;
        }

};
#endif