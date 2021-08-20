#include <iostream>
#include <string>


using namespace std;

double miles;
double feet;
double yards;

class Races: public Kilo(){
    public:
    double miles;
    if (miles > 3.26){
        cout << "You ran at least a 5k";
    }
    if (miles > 7.52){
        cout << "You ran at least a 10k";
    }
    
}