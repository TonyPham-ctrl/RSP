#include "AirCraft.h"
#include <iostream>

AirCraft::AirCraft() {}

AirCraft::AirCraft(int w)
{
    weight = w;
    fuel=100;
    numberOfFlights=0;
}

void AirCraft::refuel()
{
    fuel = 100;
}
void AirCraft::fly(int headwind, int minutes)
{
    numberOfFlights = numberOfFlights + 1;
}

int AirCraft::get_weight(){
    return weight;
}
float AirCraft::get_fuel(){
    return fuel;
}
int AirCraft::get_numberOfFlights(){
    return numberOfFlights;
}

void AirCraft::set_weight(int w){
    weight = w;
}
void AirCraft::set_fuel(float f){
    fuel=f;
}
void AirCraft::set_numberOfFlights(int noFlights){
    numberOfFlights = noFlights;
}