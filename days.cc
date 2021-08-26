#include <iostream>
#include <string>
#include "days.h"

using namespace std;

class Days: public Hours {
    public: 
        string sunny;
        string rainy;
        string cloudy;

        char weather[7];

        void weathertype(){
            cout << "What was the weather like?" 
            "(Enter 'sunny' 'rainy' or 'cloudy') " << endl;
            cout << " " << endl;
            cin >> weather;
        }

};