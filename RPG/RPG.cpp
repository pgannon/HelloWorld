#include <iostream>
#include <string>
#include "cardgame.hpp"

using namespace std;

class Character {
public:
    int hp = 50;
    int strength = 0;
    int intel = 0;
    int dex = 0;
    int lvl = 1;
    int xp = 0;
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
    int dia;

    srand(time(NULL));

    //string inv[3] = {"knife", "gold", "torch"};
    //for (int i=0; i< 2; i++){
        //   cout << inv[i] << "\n";
        //}
    //cout << inv[i] << "\n";
    cout << endl;
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

                        if (enemy.hp <= 0 || player.hp <= 0){
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
                     cout << "Critical Hit!\n*"
                          << 4 + ranCount << " Damage*\n" << endl;
                     player.hp -= 3 + ranCount;
                 }

                 if (enemy.hp <= 0 || player.hp <= 0){
                     fighting = "noFight";
                     break;
                 }

                 if (enemy.hp > 0){
                     continue;
                 }
            }

            if (player.hp <= 0){
                cout << "Rat Defeated " << name << endl
                     << "Game Over!\n\n";

                return 0;
            }

            if (enemy.hp <= 0){
                ranCount = rand() % 20 + 1;
                cout << name  << " Defeated Rat!\n\n";
                player.xp += ranCount;
                cout << name << " Gained " << ranCount << "XP!\n\n";
                cout << "Lvl." << player.lvl << " - " << name
                     << " ==| " << player.xp << " / 10 XP |\n\n";
                if (player.xp >= 10){
                    cout << name << " Leveled Up!\n\n";
                    player.lvl += 1;
                    player.intel += 1;
                    player.strength += 1;
                    player.dex += 1;
                    cout << "Intelligence-----| " << player.intel << "\n"
                         << "Strength---------| " << player.strength << "\n"
                         << "Dexterity--------| " << player.dex << "\n\n";

                    cout << "Lvl." << player.lvl << " - " << name
                         << " ==| " << player.xp << " / 25 XP |\n\n"; 
                }
            }
        }

        if (text == "talk" || text == "Talk"){
            cout << "\nYour boat comes to a halt as you shout and signal for the man.\n"
                 << "He sees you and signals back.\n\n";

            cout << "Man:- \"I heard of a shipwreck a few miles out from here,"
                 << " I'm waiting around to see if anyone washes ashore\"\n\n";

            cout << "Man:- \"You wouldn't happen to have come from that same shipwreck?\"\n\n";

            cout << "Your options are:\n\n"
                 << "1. No, I don't know where I came from...\n"
                 << "2. Yes, that does sound familiar\n"
                 << "3. Do you not have better things to do?\n\n";
            cin >> dia;

            if (dia == 1){
                cout << name  << ":- \"No, I don't know where I came from...\"\n\n";
                cout << "Man:- \"Hmm, you must of hit your head at somepoint\"\n";
                cout << "Man:- \"Come with me and I'll take you to the closest village\"\n\n";
                cout << "As you walk, the man ask's various questions to try and trigger your memory\n"
                     << "Though it's to no avail. Even though its been hours..\n\n";
            }
            if (dia == 2){
                cout << name  << ":- \"Yes, that does sound familiar\"\n\n";
                cout << "Man:- \"Wow, you're the first survivor ive encountered\"\n";
                cout << "Man:- \"You must be starving, I'll take you to the closest village\"\n\n";
                cout << "You walk with the man for hours, eating the rations he provided as you walk.\n\n";
            }
            if (dia == 3){
                cout << name << ":- \"Do you not have better things to do?\"\n\n";
                cout << "Man:- \"Excuse me? My time is best spent doing what i can to help those in need\"\n";
                cout << "Man:- \"Hm..as much as I'd like to leave you here. I can't in the shape you're in...\"\n";
                cout << "Man:- \"I'll help you get to the closest village\"\n\n";
                cout << "You travel for hours, stumbling the whole way. But like he said,"
                     << "the Man got you to the village. Even though not one of you uttered a single word the whole way\n\n";
            }
        }

        cout << "You finally reach the closest village and see a doctor. "
             << "Once you've found a bed you part ways with the man and fall straight to sleep.\n"
             << "\nYou wake up the next day feeling good but still no memory of yesterday\n"
             << "You explore the town, before you know it you find yourself in a bar\n"
             << "As you walk in you realise theres only two people, a man sitting in the corner shuffling a deck of cards"
             << ", and the barmaid\n\n";
        cout << "Your options are:\n| Drink | Cards |\n";
                cin >> text;
        if (text == "cards" || text == "Cards"){

            cout << "\n\nYou slowly walk up to man. Analysing him as you approach...\n"
                 << "\nMan:- \"You wann play?\"\n\n";

            cout << "Your options are:\n| Yes | No |\n";
            cin >> text;
            if (text == "yes" || text == "y"){
                cout << endl << endl;
                cardgame();
            }

            if (text == "no" || text == "n"){
                cout << "\n\nMan:- \"Okay then, keep walking...\"";
            }
        }
        break;
    }
}
