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
    string state = "createList";
    while (state == "priceCheck"){
        cout << "Input food to get a price:" << endl;
        cin >> food;
        cout << endl;
        if (food == "bread"){
            price = 1.50;
            cout << "Bread -- £" << price << endl << endl;
        }
        if (food == "milk"){
            price = 0.99;
            cout << "Milk -- £" << price << endl << endl;
        }
    }
    while (state == "createList"){
        cout << "Input food to add it to the list:" << endl;
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
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "butter"){
                price = 2.00;
                cout << "Butter -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "cookies"){
                price = 1.25;
                cout << "Cookies -- £" << price << endl;
                totalPrice += 0.99;
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
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "butter"){
                price = 2.00;
                cout << "Butter -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "cookies"){
                price = 1.25;
                cout << "Cookies -- £" << price << endl;
                totalPrice += 0.99;
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
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "butter"){
                price = 2.00;
                cout << "Butter -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "cookies"){
                price = 1.25;
                cout << "Cookies -- £" << price << endl;
                totalPrice += 0.99;
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
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "butter"){
                price = 2.00;
                cout << "Butter -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "cookies"){
                price = 1.25;
                cout << "Cookies -- £" << price << endl;
                totalPrice += 0.99;
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
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "butter"){
                price = 2.00;
                cout << "Butter -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "cookies"){
                price = 1.25;
                cout << "Cookies -- £" << price << endl;
                totalPrice += 0.99;
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
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "butter"){
                price = 2.00;
                cout << "Butter -- £" << price << endl;
                totalPrice += 0.99;
                cin >> food;
                cout << endl;
                item += 1;
            }
            if(food == "cookies"){
                price = 1.25;
                cout << "Cookies -- £" << price << endl;
                totalPrice += 0.99;
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
