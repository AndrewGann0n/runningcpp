#include <iostream>
#include <string>
#include <thread>
#include "races.cc"
#include "races.h"
#include "days.cc"
#include "days.h"

using namespace std;

void testing()
{
    cout << "test" << endl;
}


int main()
{
    cout << " " << endl;

    std::thread sample(testing);

    sample.join();

    Races rw;
    Days dy;

    Races *interface1 = &rw;
    Races *interface2 = &rw;
    Races *interface3 = &rw;
    Races *interface4 = &rw;
    Races *interface5 = &rw;
    Races *interface6 = &rw;
    
    Days *output1 = &dy;

    interface1->intro();
    interface2->kilorace();
    interface3->marathon();
    interface4->walk();
    interface5->speed();
    interface6->ifzero();

    cout << " " << endl;
    
    output1->weathertype();

}