#include <iostream>
#include <string>
#include "races.cc"
#include "races.h"
#include "days.cc"
#include "days.h"

using namespace std;




int main()
{

    Races rw;
    Days dy;

    Races *interface1 = &rw;
    Races *interface2 = &rw;
    Races *interface3 = &rw;
    Races *interface4 = &rw;
    Races *interface5 = &rw;
    Races *interface6 = &rw;
    
    

    interface1->intro();
    interface2->kilorace();
    interface3->marathon();
    interface4->walk();
    interface5->speed();
    interface6->ifzero();
    
    

}