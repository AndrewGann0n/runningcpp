#include <iostream>
#include <string>
#include "races.h"


using namespace std;



class Races: public Kilo {
    public:
    double miles;
    double speedperhour;

    void intro(){
        cout << "Welcome" << endl;
        cout << " " << endl;
        cout << "This is a program used to calculate running progress" << endl;
        cout << " " << endl;
        cout << "Enter '0.449' to quit " << endl;
        cout << " " << endl;
        cout << "Enter the number of miles run to the nearest tenth: " << endl;
        cout << " " << endl;
        cin >> miles;
        if (miles == 0)
        {

        Races::ifzero();
        exit(1);

        }
        if (miles == 0.449)
        {
            
        exit(1);

        }
        
        cout << " " << endl;
        cout << "Enter the average pace to the nearest tenth(measured in mph): " << endl;
        cout << " " << endl;
        cin >> speedperhour;
        if (speedperhour == 0.449)
        {

        exit(1);

        }
        cout << " " << endl;
    }

    void kilorace(){
        if (miles > 3.26 & miles < 7.26){
            cout << " " << endl;
        cout << "You ran at least a 5k" << endl;
    }
        if (miles > 7.52){
        cout << " " << endl;
        cout << "You ran at least a 10k" << endl;
    }
        if (miles < 3.26){
            cout << " " << endl;
            cout << "you did not run enough for a 5k" << endl;
    }
    
}

    void marathon(){
        if (miles > 13.1 & miles < 26.2){
            cout << " " << endl;
            cout << "You ran at least a half marathon" << endl;
        }
        if (miles > 26.2){
            cout << " " << endl;
            cout << "You ran a half marathon" << endl;
        }
        if (miles < 13.1 & miles < 26.2){
            cout << " " << endl;
            cout << "You did not run a half marathon or a marathon" << endl;
        }
    }

    void walk(){
        if (miles > 2 & speedperhour <= 5){
            cout << " " << endl;
            cout << "You walked at least two miles" << endl;
        }
    }

    void speed(){
        if (speedperhour <= 5.5){
            cout << " " << endl;
            cout << "You were walking" << endl;
        }
        if (speedperhour > 5.5 & speedperhour < 12){
            cout << " " << endl;
            cout << "You were jogging" << endl;
        }
        if (speedperhour > 12 & speedperhour < 17.5){
            cout << " " << endl;
            cout << "You were running fast" << endl;
        }
        if (speedperhour > 20){
            cout << " " << endl;
            cout << "You were sprinting" << endl;
        }
    }

    void ifzero(){
            if (miles == 0){
                cout << " " << endl;
                cout << "You did not run" << endl;
            }
        }
};