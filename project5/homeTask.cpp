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
    string statsComplete = "no";
    cout << "Let's begin, what's your name?\n";
    cin >> name;
    cout << endl;
    cout << "Interesting... " << name << " , it is\n" << endl;
                                                         while(statsComplete == "no"){
                                                         cout << "You have 20 points, spread them out over:\n\nStrength....." <<
        strength << "\n\nIntelligence....." <<
        intel << "\n\nDexterity....." <<
        dex << "\n\n";
               cout <<
                   "(20 Points) Let's start with strength, how many points?\n";
        cin >> strength;
               cout << endl;
               totalPoints -= strength;
               cout << "Strength....." <<
        strength << "\n\nIntelligence....." <<
        intel << "\n\nDexterity....." <<
        dex << "\n\n";
               cout << "("<< totalPoints <<
        "Points) Now Intelligence, how many points?\n";
        cin >> intel;
                             totalPoints -= intel;
                             dex += totalPoints;
                             cout <<  endl;
                       cout << "Strength....." <<
                           strength << "\n\nIntelligence....." <<
                           intel << "\n\nDexterity....." <<
                           dex << "\n\n";
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
        cout << "Stats completed!\n" << endl;
                                        cout << "Well, " << name
                                             << ", now that we've got that out of the way we can begin with the story\n\n\n"
                                             <<endl;

                                               cout << "Your in a Bar, only 3 heads in the room. Yours, a man sitting in the shadow's playing with a deck of cards and the barmaid.\nWhat do you do?\n";
                                                       cin >> text;
                                               if (text == "alcohol" || text == "barmaid" || text == "drink"){
                                                   cout << "\nYou walk slowly to the bar, making eye contact with the barmaid as you swagger over\n\n\"What you drinking? Heads up we only have Beer and whiskey\"\n";
                                                           }
                                                           if (text == "cards" || text == "man"){
                                                               cout << "\n\"Howdy stranger, you wanna play a game?|\"\n";
                                                           }
                                                                       cin >> text;
                                                                       if (text == "no"){
                                                                           cout << "okay then...bye\nNow what?";
                                                                       }
}
