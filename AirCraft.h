#ifndef AIRCRAFT_H
#define AIRCRAFT_H
class AirCraft
{
private:
    int weight;          // the weight of AirCraft
    float fuel;          // fuel percentage, initially 100%
    int numberOfFlights; // initially 0

    public:
    AirCraft();
    AirCraft(int w); // creates an Aircraft with weight w

    void refuel();                       // Resets fuel back to 100%
    virtual void fly(int headwind, int minutes);

    int get_weight();
    float get_fuel();
    int get_numberOfFlights();

    void set_weight(int w);
    void set_fuel(float f);
    void set_numberOfFlights(int noFlights);

};

#endif