#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player{
public:
    int numberOfCards = 1;
    int cards [6];
};

int main(){
    srand((unsigned)time(0));


    string gameState = "draw";
    Player you;
    Player cpu;

    you.cards[0] = rand() % 11 + 1;
    you.cards[1] = rand() % 11 + 1;
    you.cards[2] = rand() % 11 + 1;
    you.cards[3] = rand() % 11 + 1;
    you.cards[4] = rand() % 11 + 1;
    you.cards[5] = rand() % 11 + 1;
    you.cards[6] = rand() % 11 + 1;

    cpu.cards[0] = rand() % 11 + 1;
    cpu.cards[1] = rand() % 11 + 1;
    cpu.cards[2] = rand() % 11 + 1;
    cpu.cards[3] = rand() % 11 + 1;
    cpu.cards[4] = rand() % 11 + 1;
    cpu.cards[5] = rand() % 11 + 1;
    cpu.cards[6] = rand() % 11 + 1;

    //srand(time(NULL));

    while (gameState == "draw"){

        cout << "YOU|------| " << you.cards[0] << " | " << you.cards[1] << " |\n";
        cout << "CPU|------| " << cpu.cards[0] << " | " << cpu.cards[1] << " |\n";

        return 0;
    }
}
