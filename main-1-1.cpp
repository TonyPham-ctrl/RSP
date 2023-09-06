#include "AirCraft.h"
#include <iostream>

using namespace std;
int main(){
    AirCraft plane(100);
    plane.set_fuel(60);
    cout << "the plane have" << plane.get_fuel() << " fuel;" << plane.get_numberOfFlights() << endl;

    plane.refuel();
    plane.fly(10,60);
    cout << "the plane have" << plane.get_fuel() << " fuel, " << plane.get_numberOfFlights()<< endl;


    return 0;
}