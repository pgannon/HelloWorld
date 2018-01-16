#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    string name;
    string text = "";
    int totalPoints = 20;
    int strength = 0;
    int intel = 0;
    int dex = 0;
    int health = 100;
    int mana = 100;
    int ranCount;
    string statsComplete = "no";
    string gameLoop = "intro";

    srand(time(NULL));
    cout << "Let's begin, what's your name?\n";
    cin >> name;
    cout << endl;
    cout << "Interesting... " << name << " , it is\n" << endl;
    while(statsComplete == "no"){
        cout << "You have 20 points, spread them out over:\n\nStrength....."
             << strength << "\n\nIntelligence....." <<
        intel << "\n\nDexterity....."
             << dex << "\n\n\n";
        cout <<"(20 Points) Let's start with strength, how many points?\n";
        cin >> strength;
        cout << endl;
        totalPoints -= strength;
        cout << "Strength....."
             << strength << "\n\nIntelligence....."
             << intel << "\n\nDexterity....."
             << dex << "\n\n\n";
        cout << "("<< totalPoints
             << "Points) Now Intelligence, how many points?\n";
        cin >> intel;
        totalPoints -= intel;
        dex += totalPoints;
        cout <<  endl;
        cout << "Strength....." << strength << "\n\nIntelligence....."
             << intel << "\n\nDexterity....." << dex << "\n\n\n";
        if(totalPoints <= -1){
            cout << "You spent points you didn't have. Lets try this again\n\n";
            strength = 0;
            intel = 0;
            dex = 0;
            totalPoints = 20;
        }else{
            statsComplete = "yes";
        }
    }

    if (gameLoop == "intro"){
        cout << "\nLets Begin...\n\n" << endl;
        cout << "In the dead of misty night, You stumble through a forest clutching a dagger.\n"
         << "What would you like to do?\n" << endl;
        cout << "Your options are:\n| Walk | Run | Stop |\n\n";
                cin >> text;
        if (text == "run"){
            cout << "You're unsure why, but you begin sprint through the mist\n"
                 << "Without realising, You run head on into a man\n" << endl;
            cout << "Man:- \"Sorry Sir, I didnt see you through this mist..."
                 << "Why are you in such a rush?\"\n\n";
            if (intel > 9){
                cout << "(Inetel) Straight away you recognise that he's a member of"
                     << " the thieves guild\nWhat would you like to do?\n\n ";
                cout << "Your options are:\n| Chat | Attack | Run |\n\n";
                cin >> text;
            }
        }
        if (text == "walk"){
            cout << "You continue stumbling forward, suddenly you see a shadowy"
                 << " figure approach you through the mist\n\n";
            cout << "It's a man, and he looks just as confused as you\n\n";
            cout << "Man:- \"Sir, please can you help. My son ran off"
                 << " and its impossible to find him in this mist...\"\n\n";
            if (intel > 9){
                cout << "(Intel) Something seems fishy\n\n";
            }
            cout << "Your options are:\n| Help | Attack | Run |\n\n";
        }
    }
}
