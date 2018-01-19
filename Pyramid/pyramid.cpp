#include <iostream>

using namespace std;

9int main(){

//--------------------------------Rows of "*" (Copy)

    int rows;

    cout << "\nRow of \"*\"\nEnter number of rows:";
    cin >> rows;

    for (int i = 1; i <= rows; ++i){

        for (int j = 1; j <= i; ++j){

            cout << "* ";
        }

        cout << endl;

        continue;
    }

//-------------------------------Rows of No. (Me changing top part)

    int rows2;
    int numbers = 0;

    cout << "\nRow of Numbers\nEnter number of rows:";
    cin >> rows2;

    for (int i = 1; i <= rows2; ++i){

        for (int j = 1; j <= i; ++j){
            numbers += 1;
            cout << numbers << " ";
        }

        numbers = 0;
        cout << endl;

        continue;
    }

//--------------------------------Floyd's Triangle

    int rows3;
    int numbers2 = 0;

    cout << "\nFloyd's Triangle\nEnter number of rows:";
    cin >> rows3;

    for (int i = 1; i <= rows3; ++i){

        for (int j = 1; j <= i; ++j){
            numbers2 += 1;
            cout << numbers2 << " ";
        }

        cout << endl;

        continue;
    }

//---------------------------------Alphabet Triangle

    char input, alphabet = 'A';

    cout << "\nAlphabet starting at \"A\"\nEnter the last letter:";
    cin >> input;

    for (int i = 1; i <= (input -'A'+1); ++i){

        for (int j = 1; j <= i; ++j){

            cout << alphabet << " ";
        }
        ++alphabet;
        cout << endl;

        continue;
    }

//----------------------------------Backwards Stars

    int rows4;

    cout << "\nBackwards row of \"*\"\nEnter number of rows:";
    cin >> rows4;

    for (int i = rows4; i >= 1; --i){

        for (int j = 1; j <= i; ++j){

            cout << "* ";
        }

        cout << endl;

        continue;
    }

//----------------------------------Backwards No.

    int rows5;

    cout << "\nBackwards row of Numbers\nEnter number of rows:";
    cin >> rows5;

    for (int i = rows5; i >= 1; --i){

        for (int j = 1; j <= i; ++j){

            cout << j << " ";
        }

        cout << endl;

        continue;
    }

//------------------------------------Pyramid of stars (Copy)

    int rows6;
    int space;

    cout << "\nPyramid of \"*\"\nEnter number of rows:";
    cin >> rows6;

    for (int i = 1, k = 0; i <= rows; ++i, k = 0){

        for (space = 1; space <= rows6-i; ++space){

            cout << "  ";
        }
        while (k != 2*i-1){
            cout << "* ";
            ++k;
        }

        cout << endl;

        continue;
    }

    return 0;
}
