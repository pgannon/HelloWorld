#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int player;
string space1 = "1";
string space2 = "2";
string space3 = "3";
string space4 = "4";
string space5 = "5";
string space6 = "6";
string space7 = "7";
string space8 = "8";
string space9 = "9";
bool gameLoop = true;
int cpu;

int main(){
    
    srand(time(NULL));
    while (gameLoop == true){
        cout << endl << endl;

        cout << "       |    " << "   |      \n"
             << "   "<< space1  <<"   |   " << space2 << "   |   " << space3 <<"   \n"
             << "       |    " << "   |      \n"
             << " ------+-------+------\n"
             << "       |    " << "   |      \n"
             << "   "<< space4  <<"   |   " << space5 << "   |   " << space6 <<"   \n"
             << "       |    " << "   |      \n"
             << " ------+-------+------\n"
             << "       |    " << "   |      \n"
             << "   "<< space7  <<"   |   " << space8 << "   |   " << space9 <<"   \n"
             << "       |    " << "   |      \n";
        cout << endl << endl;
        cin >> player;
        /*--------------------------------------still working on
        while (player == 1){
            space1 = "X";
            cpu = rand() % 9 + 1;
            if (space2 != "X" && cpu == 2){
                space2 = "O";
            }
            else while (space2 == "X" && cpu  == 2){
                    continue;
                }
            if(space3 != "X" && cpu == 3){
                space3 = "O";
            }
            if(space4 != "X" && cpu == 4){
                space4 = "O";
            }
            if(space5 != "X" && cpu == 5){
                space5 = "O";
            }
            if(space6 != "X" && cpu == 6){
                space6 = "O";
            }
            if(space7 != "X" && cpu == 7){
                space7 = "O";
            }
            if(space8 != "X" && cpu == 8){
                space8 = "O";
            }
            if(space9 != "X" && cpu == 9){
                space9 = "O";
            }
        }
        */
        if (player == 2){
            space2 = "X";
            cpu = rand() % 9 + 1;
            if (space1 != "X" && cpu == 1){
                space1 = "O";
            }
            else if(space3 != "X" && cpu == 3){
                space3 = "O";
            }
            else if(space4 != "X" && cpu == 4){
                space4 = "O";
            }
            else if(space5 != "X" && cpu == 5){
                space5 = "O";
            }
            else if(space6 != "X" && cpu == 6){
                space6 = "O";
            }
            else if(space7 != "X" && cpu == 7){
                space7 = "O";
            }
            else if(space8 != "X" && cpu == 8){
                space8 = "O";
            }
            else if(space9 != "X" && cpu == 9){
                space9 = "O";
            }
        }
        if (player == 3){ 
            space3 = "X";
            cpu = rand() % 9 + 1;
            if (space2 != "X" && cpu == 2){
                space2 = "O";
            }
            else if(space1 != "X" && cpu == 1){
                space1 = "O";
            }
            else if(space4 != "X" && cpu == 4){
                space4 = "O";
            }
            else if(space5 != "X" && cpu == 5){
                space5 = "O";
            }
            else if(space6 != "X" && cpu == 6){
                space6 = "O";
            }
            else if(space7 != "X" && cpu == 7){
                space7 = "O";
            }
            else if(space8 != "X" && cpu == 8){
                space8 = "O";
            }
            else if(space9 != "X" && cpu == 9){
                space9 = "O";
            }
        }
        if (player == 4){
            space4 = "X";cpu = rand() % 9 + 1;
            if (space2 != "X" && cpu == 2){
                space2 = "O";
            }
            else if(space3 != "X" && cpu == 3){
                space3 = "O";
            }
            else if(space1 != "X" && cpu == 1){
                space1 = "O";
            }
            else if(space5 != "X" && cpu == 5){
                space5 = "O";
            }
            else if(space6 != "X" && cpu == 6){
                space6 = "O";
            }
            else if(space7 != "X" && cpu == 7){
                space7 = "O";
            }
            else if(space8 != "X" && cpu == 8){
                space8 = "O";
            }
            else if(space9 != "X" && cpu == 9){
                space9 = "O";
            }
        }
        if (player == 5){
            space5 = "X";
            cpu = rand() % 9 + 1;
            if (space2 != "X" && cpu == 2){
                space2 = "O";
            }
            else if(space3 != "X" && cpu == 3){
                space3 = "O";
            }
            else if(space4 != "X" && cpu == 4){
                space4 = "O";
            }
            else if(space1 != "X" && cpu == 1){
                space1 = "O";
            }
            else if(space6 != "X" && cpu == 6){
                space6 = "O";
            }
            else if(space7 != "X" && cpu == 7){
                space7 = "O";
            }
            else if(space8 != "X" && cpu == 8){
                space8 = "O";
            }
            else if(space9 != "X" && cpu == 9){
                space9 = "O";
            }
        }
        if (player == 6){ 
            space6 = "X";
            cpu = rand() % 9 + 1;
            if (space2 != "X" && cpu == 2){
                space2 = "O";
            }
            else if(space3 != "X" && cpu == 3){
                space3 = "O";
            }
            else if(space4 != "X" && cpu == 4){
                space4 = "O";
            }
            else if(space5 != "X" && cpu == 5){
                space5 = "O";
            }
            else if(space1 != "X" && cpu == 1){
                space1 = "O";
            }
            else if(space7 != "X" && cpu == 7){
                space7 = "O";
            }
            else if(space8 != "X" && cpu == 8){
                space8 = "O";
            }
            else if(space9 != "X" && cpu == 9){
                space9 = "O";
            }
        }
        if (player == 7){
            space7 = "X";cpu = rand() % 9 + 1;
            if (space2 != "X" && cpu == 2){
                space2 = "O";
            }
            else if(space3 != "X" && cpu == 3){
                space3 = "O";
            }
            else if(space4 != "X" && cpu == 4){
                space4 = "O";
            }
            else if(space5 != "X" && cpu == 5){
                space5 = "O";
            }
            else if(space6 != "X" && cpu == 6){
                space6 = "O";
            }
            else if(space1 != "X" && cpu == 1){
                space1 = "O";
            }
            else if(space8 != "X" && cpu == 8){
                space8 = "O";
            }
            else if(space9 != "X" && cpu == 9){
                space9 = "O";
            }
        }
        if (player == 8){
            space8 = "X";
            cpu = rand() % 9 + 1;
            if (space2 != "X" && cpu == 2){
                space2 = "O";
            }
            else if(space3 != "X" && cpu == 3){
                space3 = "O";
            }
            else if(space4 != "X" && cpu == 4){
                space4 = "O";
            }
            else if(space5 != "X" && cpu == 5){
                space5 = "O";
            }
            else if(space6 != "X" && cpu == 6){
                space6 = "O";
            }
            else if(space7 != "X" && cpu == 7){
                space7 = "O";
            }
            else if(space1 != "X" && cpu == 1){
                space1 = "O";
            }
            else if(space9 != "X" && cpu == 9){
                space9 = "O";
            }
        }
        if (player == 9){ 
            space9 = "X";
            cpu = rand() % 9 + 1;
            if (space2 != "X" && cpu == 2){
                space2 = "O";
            }
            else if(space3 != "X" && cpu == 3){
                space3 = "O";
            }
            else if(space4 != "X" && cpu == 4){
                space4 = "O";
            }
            else if(space5 != "X" && cpu == 5){
                space5 = "O";
            }
            else if(space6 != "X" && cpu == 6){
                space6 = "O";
            }
            else if(space7 != "X" && cpu == 7){
                space7 = "O";
            }
            else if(space8 != "X" && cpu == 8){
                space8 = "O";
            }
            else if(space1 != "X" && cpu == 1){
                space1 = "O";
            }
        }
    }
}
