#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "global.hpp"

using namespace std;

int questnum = 1;
int num1 = 0;
int num2 = 0;
int answer = 0;
string section = "addition";
//int score = 0;

int level1(){
    //srand(time(NULL));

    int temp = score;

    cout << "\nMath Quiz\n--\nLevel 1 - Addition\n--\n";

    while (section == "addition"){
        srand((unsigned)time(0));

        num1 = rand() & 19 + 1;
        num2 = rand() & 19 + 1;

        cout << questnum << ". " << num1 << " + " << num2
             <<" = ?\n";
        cin >> answer;
        cout << endl;
        if (answer == num1 + num2){
            cout << "Correct\n\n";
            score += 1;
        }

        if (answer != num1 + num2){
            cout << "Incorrect\n\n";
        }

        questnum += 1;

        if (questnum >= 11){
            cout << "--\nSection Complete\n--\n"
                 << "Score:- " << score << endl << endl;
            section = "subtraction";
            questnum = 1;
            break;
        }
    }

    cout << "\n--\nLevel 2 - Subtraction\n--\n";

    while (section == "subtraction"){

        num1 = rand() & 19 + 1;
        num2 = rand() & 19 + 1;
        cout << questnum << ". " << num1 << " - " << num2
             <<" = ?\n";
        cin >> answer;
        cout << endl;
        if (answer == num1 - num2){
            cout << "Correct\n\n";
            score += 1;
        }

        if (answer != num1 - num2){
            cout << "Incorrect\n\n";
        }

        questnum += 1;

        if (questnum >= 11){
            cout << "--\nSection Complete\n--\n"
                 << "Score:-  " << score << endl << endl;
            questnum = 1;
            break;
        }
    }
}
