#include <iostream>
#include <string>
#include "races.h"


using namespace std;

double miles;
double speedperhour;

class Races: public Kilo {
    public:

    void kilorace(){
        if (miles > 3.26 & miles < 7.26){
        cout << "You ran at least a 5k";
    }
        if (miles > 7.52){
        cout << "You ran at least a 10k";
    }
        if (miles < 3.26){
            cout << "you did not run enough for a 5k";
    }
    
}

    void marathon(){
        if (miles > 13.1 & miles < 26.2){
            cout << "You ran at least a half marathon";
        }
        if (miles > 26.2){
            cout << "You ran a half marathon";
        }
        if (miles < 13.1 & miles < 26.2){
            cout << "You did not run a half marathon or a marathon";
        }
    }

    void walk(){
        if (miles > 2){
            cout << "You walked at least two miles";
        }
    }

    void speed(){
        if (speedperhour < 3.5){
            cout << "You are walking";
        }
        if (speedperhour > 5.5 & speedperhour < 12){
            cout << "You are jogging";
        }
        if (speedperhour > 12 & speedperhour < 17.5){
            cout << "You are running fast";
        }
        if (speedperhour > 20){
            cout << "You are sprinting";
        }
    }
};