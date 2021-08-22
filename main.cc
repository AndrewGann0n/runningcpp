#include <iostream>
#include <string>
#include "races.cc"
#include "races.h"

using namespace std;




int main()
{
    cout << "Welcome" << endl;
    cout << "This is a program used to calculate running progress" << endl;
    cout << "Enter the number of miles run to the nearest tenth" << endl;
    cin >> miles;

    Races rw;

    Races *interface1 = &rw;
    Races *interface2 = &rw;
    Races *interface3 = &rw;

    interface1->kilorace();
    interface2->marathon();
    interface3->walk();


    

}