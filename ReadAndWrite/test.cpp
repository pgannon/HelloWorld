#include <iostream>
#include <fstream>

using namespace std;

void test(){
    ifstream myfile;

    string line;

    myfile.open ("example.txt");

    if (myfile.is_open()){
        while( getline (myfile,line)){
            cout << line << '\n';
        }
    }
}
