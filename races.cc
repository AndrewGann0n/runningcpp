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
        
    }
};