#include <iostream>
#include <fstream>
#include <string>
#include "test.hpp"

using namespace std;

int main(){
    ofstream myfile;
    string line;

    myfile.open ("example.txt");

    myfile << "Here's some more fantastic text for you to look at!\n\n";

    test();
}
