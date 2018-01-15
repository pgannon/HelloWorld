#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){

    string food = "";
    double price;
    int item = 1;
    double totalPrice;
    string state = "priceCheck";
    while (state == "priceCheck"){
        cout << "Food Available:" << endl << "| Bread | Milk | Eggs | Butter |"
             << " Cookies | Juice |" << endl << endl;
        cout << "Type in the name of the item to price check" << endl;
        cout << "After type \"list\" to create your shopping list"
             << endl << endl;
        cin >> food;
        cout << endl;
        if (food == "bread"){
            price = 1.50;
            cout << "Bread -- £" << price << endl << endl;
            continue;
        }
        if (food == "milk"){
            price = 0.99;
            cout << "Milk -- £" << price << endl << endl;
            continue;
        }
        if (food == "eggs"){
            price = 1.60;
            cout << "Eggs -- £" << price << endl << endl;
            continue;
        }
        if (food == "butter"){
            price = 2.00;
            cout << "Butter -- £" << price << endl << endl;
            continue;
        }
        if (food == "cookies"){
            price = 1.25;
            cout << "Cookies -- £" << price << endl << endl;
            continue;
        }
        if (food == "juice"){
            price = 0.99;
            cout << "Juice -- £" << price << endl << endl;
            continue;
        }

        if (food == "list" ){

            state = "createList";
        }
    }
    while (state == "createList"){
        cout << "Type items to add them to your shopping list" << endl;
        cout << "After \"end\" to finish and get your total" << endl;
        cin >> food;
        cout << endl;

        if (item == 1){
            if (food == "bread"){
                price = 1.50;
                cout << "Bread -- £"<< price << endl;
                totalPrice += 1.50;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "milk"){
                price = 0.99;
                cout << "Milk -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "eggs"){
                price = 1.60;
                cout << "Eggs -- £" << price << endl;
                totalPrice += 1.60;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "butter"){
                price = 2.00;
                cout << "Butter -- £" << price << endl;
                totalPrice += 2.00;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "cookies"){
                price = 1.25;
                cout << "Cookies -- £" << price << endl;
                totalPrice += 1.25;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "juice"){
                price = 0.99;
                cout << "Juice -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
        }
        if (item == 2){
            if (food == "bread"){
                price = 1.50;
                cout << "Bread -- £"<< price << endl;
                totalPrice += 1.50;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "milk"){
                price = 0.99;
                cout << "Milk -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "eggs"){
                price = 1.60;
                cout << "Eggs -- £" << price << endl;
                totalPrice += 1.60;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "butter"){
                price = 2.00;
                cout << "Butter -- £" << price << endl;
                totalPrice += 2.00;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "cookies"){
                price = 1.25;
                cout << "Cookies -- £" << price << endl;
                totalPrice += 1.25;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "juice"){
                price = 0.99;
                cout << "Juice -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
        }
         if (item == 3){
            if (food == "bread"){
                price = 1.50;
                cout << "Bread -- £"<< price << endl;
                totalPrice += 1.50;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "milk"){
                price = 0.99;
                cout << "Milk -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "eggs"){
                price = 1.60;
                cout << "Eggs -- £" << price << endl;
                totalPrice += 1.60;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "butter"){
                price = 2.00;
                cout << "Butter -- £" << price << endl;
                totalPrice += 2.00;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "cookies"){
                price = 1.25;
                cout << "Cookies -- £" << price << endl;
                totalPrice += 1.25;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "juice"){
                price = 0.99;
                cout << "Juice -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
        }
          if (item == 4){
            if (food == "bread"){
                price = 1.50;
                cout << "Bread -- £"<< price << endl;
                totalPrice += 1.50;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "milk"){
                price = 0.99;
                cout << "Milk -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "eggs"){
                price = 1.60;
                cout << "Eggs -- £" << price << endl;
                totalPrice += 1.60;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "butter"){
                price = 2.00;
                cout << "Butter -- £" << price << endl;
                totalPrice += 2.00;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "cookies"){
                price = 1.25;
                cout << "Cookies -- £" << price << endl;
                totalPrice += 1.25;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "juice"){
                price = 0.99;
                cout << "Juice -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
        }
          if (item == 5){
            if (food == "bread"){
                price = 1.50;
                cout << "Bread -- £"<< price << endl;
                totalPrice += 1.50;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "milk"){
                price = 0.99;
                cout << "Milk -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "eggs"){
                price = 1.60;
                cout << "Eggs -- £" << price << endl;
                totalPrice += 1.60;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "butter"){
                price = 2.00;
                cout << "Butter -- £" << price << endl;
                totalPrice += 2.00;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "cookies"){
                price = 1.25;
                cout << "Cookies -- £" << price << endl;
                totalPrice += 1.25;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "juice"){
                price = 0.99;
                cout << "Juice -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
        }
          if (item == 6){
            if (food == "bread"){
                price = 1.50;
                cout << "Bread -- £"<< price << endl;
                totalPrice += 1.50;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "milk"){
                price = 0.99;
                cout << "Milk -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "eggs"){
                price = 1.60;
                cout << "Eggs -- £" << price << endl;
                totalPrice += 1.60;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "butter"){
                price = 2.00;
                cout << "Butter -- £" << price << endl;
                totalPrice += 2.00;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "cookies"){
                price = 1.25;
                cout << "Cookies -- £" << price << endl;
                totalPrice += 1.25;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "juice"){
                price = 0.99;
                cout << "Juice -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
        }
        if (food == "end"){
            break;
        }
    }
    cout << "Total: £" << totalPrice << endl;
}
