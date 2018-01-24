#include <iostream>
#include <string>

using namespace std;

class location{
public:
    int distance;
};

int main(){

    location home;
    location tesco;
    location trainStation;
    location cinema;
    location chickenShop;
    location pub;

    string destination1;
    string destination2;

    int totalDistance = 0;

    int sec;
    int mins = 0;
    int hours = 0;

    home.distance = 0;
    tesco.distance = 750;
    trainStation.distance = 1250;
    cinema.distance = 1450;
    chickenShop.distance = 1800;
    pub.distance = 2250;

    cout << "List of Locations:\n"
         << "1. Home\n"
         << "2. Tesco\n"
         << "3. Train Station\n"
         << "4. Cinema\n"
         << "5. Chicken-Shop\n"
         << "6. Pub\n\n";

    cout << "What is your Starting Location?\n";
    cin >> destination1;
    cout << endl;

    if (destination1 == "home"){
        totalDistance += home.distance;
    }

    if (destination1 == "trainStation"){

        totalDistance += trainStation.distance;
    }

    if (destination1 == "tesco"){
        totalDistance += tesco.distance;
    }

    if (destination1 == "cinema"){
        totalDistance += cinema.distance;
    }

    if (destination1 == "chicken-shop"){
        totalDistance += chickenShop.distance;
    }

    if (destination1 == "pub"){
        totalDistance += pub.distance;
    }

    cout << "What is your End Location?\n";
    cin >> destination2;
    cout << endl;

    if (destination2 == "home"){
        totalDistance += home.distance;
    }

    if (destination2 == "trainStation"){

        totalDistance += trainStation.distance;
    }

    if (destination2 == "tesco"){
        totalDistance += tesco.distance;
    }

    if (destination2 == "cinema"){
        totalDistance += cinema.distance;
    }

    if (destination2 == "chicken-shop"){
        totalDistance += chickenShop.distance;
    }

    if (destination2 == "pub"){
        totalDistance += pub.distance;
    }

    mins = totalDistance;
    mins /= 60;

    //cout << "MINUTES:-"  << mins << endl;
    
    if (mins >= 60){
         mins -= 60;
         hours += 1;
    }

    cout <<"From - " << destination1 << " =====> " << "To - "<< destination2
         << endl << endl;

    cout << "Total Distance - " << totalDistance << "m\n\n";
    cout << "Walking Time - " << hours << "hours " << mins << "min\n\n";

    //cout << "\n\nYour Location is " << totalDistance << "m away\n\n";
}
