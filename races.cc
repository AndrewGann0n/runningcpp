#include <iostream>
#include <string>
#include "races.h"

using namespace std;

double miles;
double feet;
double yards;

class Races: public Kilo {
    public:
    double miles;
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
            cout << "You ran at least two miles";
        }
    }
};