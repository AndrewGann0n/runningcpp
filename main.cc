#include <iostream>
#include <string>
#include "races.cc"

using namespace std;




int main()
{
    Races rw;

    Races *interface1 = &rw;

    interface1->kilorace();


    cout << "Welcome" << endl;
    cout << "This is a program used to calculate running progress" << endl;
    cout << "Enter the number of miles run to the nearest tenth" << endl;
    cin >> miles;
    

}