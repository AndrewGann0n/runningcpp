#include <iostream>
#include <string>
#include "days.h"

using namespace std;

class Days: public Hours {
    public: 
        string sunny;
        string rainy;
        string cloudy;
        double hours;

        char weather[7];

        void weathertype(){
            cout << "What was the weather like? \t"  
            "Enter 'sunny' 'rainy' or 'cloudy': " << endl;
            cout << " " << endl;
            cin >> weather;
            if (weather == rainy){
                cout << "How long did it rain for ?" << endl;
                cout << " " << endl;
                cin >> hours;
                if (hours < 1){
                    cout << "Only a slight drizzle" << endl;
                }
                if (hours > 1){
                    cout << "You should have chose another day to run" << endl;
                }
            }
        }

};