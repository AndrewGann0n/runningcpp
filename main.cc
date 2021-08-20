#include <iostream>
#include <string>

using namespace std;

double miles;
double feet;
double yards;

void run(){
    double miles;
    if (miles > 3.26){
        cout << "You ran at least a 5k";
    }
    if (miles > 7.52){
        cout << "You ran at least a 10k";
    }
    
}

int main()
{
    cout << "Welcome" << endl;
    cout << "This is a program used to calculate running progress" << endl;
    cout << "Enter the number of miles run to the nearest tenth" << endl;
    cin >> miles;


    run();
    

}