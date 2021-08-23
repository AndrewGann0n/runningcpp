#include <iostream>
#include <string>
#include "races.cc"
#include "races.h"

using namespace std;




int main()
{

    Races rw;

    Races *interface1 = &rw;
    Races *interface2 = &rw;
    Races *interface3 = &rw;
    Races *interface4 = &rw;
    Races *interface5 = &rw;

    interface1->intro();
    interface2->kilorace();
    interface3->marathon();
    interface4->walk();
    interface5->speed();



    

}