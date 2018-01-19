#include <iostream>

using namespace std;

string name1;
string name2;
string name3;
int age1;
int age2;
int age3;
string age1Bar;
string age2Bar;
string age3Bar;

int main(){
    cout << "\nAge Barchart\n\nEnter Initials of First Person:";
    cin >> name1;
    cout << "\nEnter Initials of Second Person:";
    cin >> name2;
    cout << "\nEnter Initials of Third Person:";
    cin >> name3;
    cout << endl;
    cout << endl;

    cout << "Enter Age for " << name1 << ":";
    cin >> age1;
    age1 = age1 / 2;

    cout << "\nEnter Age for " << name2 << ":";
    cin >> age2;
    age2 = age2 / 2;

    cout << "\nEnter Age for " << name3 << ":";
    cin >> age3;
    age3 = age3 / 2;

    cout << endl << endl;

    cout << "      |                        AGE" << endl;
    cout << "      |   -10- -20- -30- -40- -50- -60- -70- -80- -90- -100-" << endl;
    cout << " NAME |.....|....|....|....|....|....|....|....|....|....|  " << endl;
    cout << "------|---------------------------------------------------" << endl;
    cout << "  " << name1 << "  |";

    for (int i = 1; i <= age1; ++i){
        cout <<"=";
        continue;
    }

    cout << "|" << endl;
    cout << "------|---------------------------------------------------" << endl;
    cout << "  " << name2 << "  |";

    for (int i = 1; i <= age2; ++i){
        cout <<"=";
        continue;
    }

    cout << "|" << endl;
    cout << "------|---------------------------------------------------" << endl;
    cout << "  " << name3 << "  |";

    for (int i = 1; i <= age3; ++i){
        cout <<"=";
        continue;
    }

    cout << "|" << endl;
    cout << "------|---------------------------------------------------" << endl << endl;
}
