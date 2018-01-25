#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "level1.hpp"
#include "global.hpp"

using namespace std;

string name1 = "ABC";
string name2 = "ABC";
string name3 = "ABC";
string name4 = "ABC";
int hscore1 = 0;
int hscore2 = 0;
int hscore3 = 0;
int hscore4 = 0;

int readf()
{
    string line;

    ifstream myfile ("highscore.txt");

    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    return 0;
}

int writef()
{
    ofstream myfile ("highscore.txt");

    if (myfile.is_open())
    {
        ofstream myfile;
        myfile.open ("highscore.txt");
        cout << "Enter your name:\n";
        if (score >= hscore1 && hscore1 == 0){
            cin >> name1;
            hscore1 = score;
        }

        if (score >= hscore2 && score < hscore1 && hscore2 == 0){
            cin >> name2;
            hscore2 = score;
        }

        if (score >= hscore3 && score < hscore2){
            cin >> name3;
            hscore3 = score;
        }

        if (score >= hscore4 && score < hscore3){
            cin >> name4;
            hscore4 = score;
        }

        cout << "\nHigh-Scores:\n"

        myfile << "1. " << name1 << ".....[" << hscore1 << "]\n";
        myfile << "2. " << name2 << ".....[" << hscore2 << "]\n";
        myfile << "3. " << name3 << ".....[" << hscore3 << "]\n";
        myfile << "4. " << name4 << ".....[" << hscore4 << "]\n";
        myfile.close();
    }

    return 0;
}

int readf()
{
    string line;

    ifstream myfile ("highscore.txt");

    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    return 0;
}


int main(){
    readf1();
    level1();
    writef();
    readf();
    //level2();
}
