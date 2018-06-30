
#include "CargoShip.h"
#include <iostream>
#include <string>
using namespace std;

CargoShip::CargoShip(): Ship()
{}
CargoShip::CargoShip(string n, string y, int c) : Ship(n,y)
{
        cargoCapacity=c;
}
void CargoShip::setCargoCapacity(int c)
{
        cargoCapacity=c;
}
int CargoShip::getCargoCapacity()
{
        return cargoCapacity;
}

CargoShip CargoShip:: operator++(int)
{
        cargoCapacity++;
        return *this;
}

CargoShip CargoShip:: operator+(const CargoShip &rhs)const
{
        CargoShip c;
        c.cargoCapacity=cargoCapacity+rhs.cargoCapacity;
        return c;
}
