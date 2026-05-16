#include <iostream>
#include <string>
#include "function.h"
using namespace std;
int main(){
    
    Menu m;
    int choice;
    order Or;

    do{
        cout << "\n==============================" << endl;
        cout << "  RESTAURANT BILLING SYSTEM   " << endl;
        cout << "==============================" << endl;
        cout << "       1. View Menu           " << endl;
        cout << "       2. Place Order         " << endl;
        cout << "       3. Generate Bill       " << endl;
        cout << "       4. EXIT                " << endl;
        cout << "==============================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:{

                m.displaymenu();
                break;
            }
            
            case 2:{
        
                Or.takeorder(m);
                Or.genrateBill();
                break;
            }

            case 3:{

                Or.genrateBill();
                break;
                
            }
            case 4:{

                cout << "Thank you for visiting! Have a great day!" << endl;
                break;
                
            }
            default:{

                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }while(choice!=4);
    return 0;
}