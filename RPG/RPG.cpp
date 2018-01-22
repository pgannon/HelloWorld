#include <iostream>
#include <string>

using namespace std;

class Character {
public:
    int hp = 50;
    int strength = 0;
    int intel = 0;
    int dex = 0;
    int lvl = 1;
};







int main(){

    string name;
    int statPoints = 20;
    string gameState = "setup";
    Character player;
    Character enemy;
    string fighting;
    string text;
    int ranCount;

    srand(time(NULL));

    cout << "Please enter your name..." << endl;
    cin >> name;
    cout << "\n\nWell " << name << ", let's start your quest...\n"
         << endl;

    while (gameState == "setup"){

        cout << "Set Your Stats:\n"
             << "Intelligence-----| " << player.intel << "\n"
             << "Strength---------| " << player.strength << "\n"
             << "Dexterity--------| " << player.dex << "\n\n";

        cout <<"("<< statPoints  <<" points)" << "Set Intelligence:";
        cin >> player.intel;
        statPoints -= player.intel;

        cout << "\n\nIntelligence-----| " << player.intel << "\n"
             << "Strength---------| " << player.strength << "\n"
             << "Dexterity--------| " << player.dex << "\n\n";

        cout <<"("<< statPoints  <<" points)" << "Set Strength:";
        cin >> player.strength;
        statPoints -= player.strength;
        player.dex = statPoints;

        cout << "\n\nIntelligence-----| " << player.intel << "\n"
             << "Strength---------| " << player.strength << "\n"
             << "Dexterity--------| " << player.dex << "\n\n";

        if (player.dex < 0){
            cout << "You spend too many points, try again...\n\n";
            player.intel = 0;
            player.dex = 0;
            player.strength = 0;

            statPoints = 20;
        }
        else if  (player.intel + player.dex + player.strength <= 20){
            cout << "Your stats have been set\n\n";
            gameState = "intro";
            break;
        }
    }

    while (gameState == "intro"){
        cout << "Slowly your eyes open as your one man boat approaches the shore.\n"
             << "With nothing but the clothes on your back. You dont know where you are, or where you've come from.\n"
             << "As you get closer you notice a man in the distance, he seems to be armed with a sword.\n"
             << "He hasn't seen you yet...\n\n";

        cout << "What would you like to do?\n";
        cout << "| Talk | Run |\n";
        cin >> text;

        if (text == "run" || text == "Run"){
            cout <<  "\nAs soon as your boat makes contact with land,"
                 << " without hesitation you hop out and sprint into the wilderness.\n\n"
                 << "Man:- \"Hey! Wait!!\"\n\n"
                 << "You ingore his shouting as you continue gunning it through the forest.\n"
                 << "Suddenly, you trip over something...\n"
                 << "Its some kind of giant Rat\n\n";

            cout << name << " Encontered Rat\n\n";
            fighting = "fightingRat";
            enemy.hp = 25;

            while (fighting == "fightingRat"){

                cout << "Lvl." << player.lvl << " - " << name << " == HP| "
                     << player.hp << " |"  << endl;
                cout << "Lvl.1 - Rat == HP| " << enemy.hp << " |" << endl;
                cout << "\nYour options are:\n| Attack | Run |\n\n";
                cin >> text;

                if (text == "run"){
                        cout << "You cant escape!\n" << endl;
                        cout << "Rat Attacked " << name << "!" << endl;
                        cout << "*5 Damage*\n\n" << endl;
                        player.hp -= 5;
                        continue;
                    }

                if (text == "attack"){
                        ranCount = rand() % 11 + 1;

                        if (ranCount == 1){
                            cout << "Missed!\n" << endl;
                        }

                        if (ranCount == 2){
                            cout << "Rat Dodged your Attack!\n" << endl;
                        }

                        if (ranCount <= 10 && ranCount >= 3 ){
                            cout << name  << " Attacked Rat!" << endl;
                            cout << "*" << ranCount << " Damage*\n" << endl;
                            enemy.hp -= ranCount;
                        }

                        if (ranCount == 11){
                            cout << name << " Attacked Rat!" << endl;
                            cout << "(Strength) Critical Hit!\n*"
                                 << player.strength + ranCount << " Damage*\n" << endl;
                            enemy.hp -= player.strength + ranCount;
                        }

                        
                        if (enemy.hp < 0){
                            fighting = "noFight";
                            break;
                        }
                }

                ranCount = rand() % 11 + 1;

                 if (ranCount == 1){
                     cout << "Missed!\n" << endl;
                 }
                 if (ranCount == 2){
                     cout << "You Dodged Rats Attack!\n" << endl;
                 }

                 if (ranCount <= 10 && ranCount >= 3 ){
                     cout << "Rat Attacked " << name  << "!" << endl;
                     cout << "*" << ranCount << " Damage*\n" << endl;
                     player.hp -= ranCount;
                 }

                 if (ranCount == 11){
                     cout << "Rat Attacked " << name  << "!" << endl;
                     cout << "(Strength) Critical Hit!\n*"
                          << 4 + ranCount << " Damage*\n" << endl;
                     player.hp -= 4 + ranCount;
                 }

                 if (enemy.hp > 0){
                     continue;
                 }
            }

            if (enemy.hp <= 0){

                cout << name  << " Defeated Rat!\n\n";
            }
        }

        if (text == "talk" || text == "Talk"){
            cout << "\nYour boat comes to a halt as you shout and signal for the man.\n"
                 << "He sees you and signals back.\n";

            cout << "Man:- \"\"";
        }

        break;
    }
}
