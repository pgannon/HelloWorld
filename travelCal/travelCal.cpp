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

    int totalDestinations;

    string destination1;
    string destination2;
    string destination3;
    string destination4;
    string destination5;
    string destination6;

    int totalDistance = 0;

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

    cout << "How many Destinations?\n";
    cin >> totalDestinations;
    cout << endl << endl;

    cout << "What is your Starting Location?\n";
    cin >> destination1;
    cout << endl;

    if (totalDestinations == 2){

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

      if (mins >= 60){
           mins -= 60;
           hours += 1;
      }

      cout <<"From - " << destination1 << " =====> " << "To - "<< destination2
           << endl << endl;

      cout << "Total Distance - " << totalDistance << "m\n\n";

      cout << "Walking Time - " << hours << "hours " << mins << "min\n\n";
    }

     if (totalDestinations == 3){

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

      cout << "What is your Next Location?\n";
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

      cout << "What is your End Location?\n";
      cin >> destination3;
      cout << endl;

      if (destination3 == "home"){
          totalDistance += home.distance;
      }

      if (destination3 == "trainStation"){

          totalDistance += trainStation.distance;
      }

      if (destination3 == "tesco"){
          totalDistance += tesco.distance;
      }

      if (destination3 == "cinema"){
          totalDistance += cinema.distance;
      }

      if (destination3 == "chicken-shop"){
          totalDistance += chickenShop.distance;
      }

      if (destination3 == "pub"){
          totalDistance += pub.distance;
      }

      mins = totalDistance;
      mins /= 60;

      if (mins >= 60){
           mins -= 60;
           hours += 1;
      }

      cout <<"From - " << destination1 << " =====> " << "To - "<< destination2
           << " =====> " << "To - "<< destination3 <<  endl << endl;

      cout << "Total Distance - " << totalDistance << "m\n\n";

      cout << "Walking Time - " << hours << "hours " << mins << "min\n\n";
    }
}
