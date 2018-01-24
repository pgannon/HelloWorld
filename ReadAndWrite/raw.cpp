#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int writef()
{
    ofstream myfile ("example.txt");

    if (myfile.is_open())
    {
        myfile << "Heres some text\n";

        myfile << "Whoa, more text!\n";

        myfile.close();
    }

    return 0;
}

int readf()
{
    string line;

    ifstream myfile ("example.txt");

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

int main () {
    writef();
    readf();
}
