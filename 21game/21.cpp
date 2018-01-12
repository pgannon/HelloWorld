#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){

    string text = "";
    bool cpuReveal = false;
    int playerCard1;
    int playerCard2;
    int cpuCard1;
    int cpuCard2;
    string gameState = "";

    srand (time(NULL));
    cin >> text;
    (gameState == "deal"){
        playerCard1 = rand() % 11 + 1;
        playerCard2 = rand() % 11 + 1;
        cpuCard1 = rand() % 11 + 1;
        cpuCard2 = rand() % 11 + 1;
        cout << "Player -- | " << playerCard1 << " | " << playerCard2 << " |" <<
            endl;
    }

    if (cpuReveal == false){
        cout << "Computer -- | " << "**" << " | " << "**" << " |" << endl;
    } else {
        cout << "Computer -- | " << cpuCard1 << " | " << cpuCard2 << " |" << endl;
    }

    if (text == "stay"){
        cpuReveal = true;
    }
}
