#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string text = "";
    bool cpuReveal = false;
    int pCards = 2;
    int cCards = 2;
    int playerCard4;
    int playerCard3;
    int playerCard2;
    int playerCard1;
    int cpuCard1;
    int cpuCard2;
    int cpuCard3;
    int pTotalC;
    int cTotalC;
    string gameState = "playing";
    bool repeat = true;

    srand(time(NULL));
    while (repeat == true) {
        while (gameState == "playing") {
            // dump all variavbles as debug

            playerCard1 = rand() % 11 + 1;
            playerCard2 = rand() % 11 + 1;
            playerCard3 = rand() % 11 + 1;
            playerCard4 = rand() % 11 + 1;
            cpuCard1 = rand() % 11 + 1;
            cpuCard2 = rand() % 11 + 1;
            cpuCard3 = rand() % 11 + 1;
            cout << "YOU -- | " << playerCard1 << " | " << playerCard2 << " |"
                 << endl;

            if (cpuReveal == false) {
                cout << "CPU -- | " << "**" << " | " << "**" << " |" << endl;
            }

            cout << "Hit or Stay?" << endl;
            cin >> text;
            cout << endl;
            cout << endl;

            if (text == "hit") {
                if (pCards == 2) {
                    cout << "YOU -- | " << playerCard1 << " | " << playerCard2
                         << " | " << playerCard3 << " | "  << endl;
                    pCards += 1;
                }
                //cout << "CPU -- | " << "**" << " | " << "**" << " |" <<
                //endl;
            }

            if (playerCard1 + playerCard2 + playerCard3 > 21) {
                cout << "BUST!\n" << endl;
                gameState = "gameOverLose";
                break;
            }

            if (cpuCard1 + cpuCard2 <= 16) {
                cout << "CPU -- | " << "**" << " | " << "**" << " |" << "**"
                     << " |" << endl;
                cCards += 1;
            } else {
                cout << "CPU -- | " << "**" << " | " << " **" << " |" << endl;
            }

            cin >> text;
            if (text == "hit" && pCards == 3) {
                cout << "YOU -- | " << playerCard1 << " | " << playerCard2 <<
                    " | " << playerCard3 << " | "  << playerCard4 <<
                    " | "   << endl;
            }

            if (text == "stay") {
                cpuReveal = true;
            }

            cout << endl;
            cout << endl;

            if (cpuReveal == true) {
                if (pCards == 2) {
                    cout << "YOU -- | " << playerCard1 << " | " << playerCard2
                         << " | " << " ===> " << playerCard1 + playerCard2 <<endl;
                    pTotalC = playerCard1 + playerCard2;
                }

                if (cCards == 2) {
                    cout << "CPU -- | " << cpuCard1 << " | " << cpuCard2
                         << " | " << " ===> " << cpuCard1 + cpuCard2 << endl;
                    cTotalC = cpuCard1 + cpuCard2;
                }

                if (pCards == 3) {
                    cout << "YOU -- | " << playerCard1 << " | " << playerCard2
                         << " | "  << playerCard3 <<" |" << " ===> "
                         << playerCard1 + playerCard2 + playerCard3 << endl;
                }

                if (cCards == 3) {
                    cout << "CPU -- | " << cpuCard1 << " | " << cpuCard2
                         << " | " << cpuCard3 << " | " <<  " ===> "
                         << cpuCard1 + cpuCard2 + cpuCard3 << endl;
                }

                cout << "DEBUG: pTotalC: " << pTotalC << " cTotalC: " << cTotalC
                     << endl;

                if (pTotalC > cTotalC) {
                    gameState = "gameOverWin";
                    cout << "You Win" << endl;
                    cout << "Would you like to play again?" << endl;
                    cin >> text;
                    pTotalC = 2;
                    cTotalC = 2;
                    cpuReveal = false;
                }

                if (pTotalC < cTotalC) {
                    gameState = "gameOverLose";
                }
            }
        }

        if (gameState == "gameOverLose" ) {
            cout << "You Lose" << endl;
            cout << "Would you like to play again?" << endl;
            cin >> text;
            pTotalC = 2;
            cTotalC = 2;
        }

        if (text == "yes" || text == "y") {
            cpuReveal = false;
            gameState = "playing";
        }

        if (text == "no" || text == "n") {
            return 0;
        }
    }
}
