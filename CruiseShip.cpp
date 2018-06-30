
#include "CruiseShip.h"
#include <iostream>
#include <string>
using namespace std;
CruiseShip::CruiseShip(): Ship()
{}
CruiseShip::CruiseShip(string n, string y, int m) : Ship(n,y)
{
        maxPassengers=m;
}
void CruiseShip::setMaxPassengers(int m)
{
        maxPassengers=m;
}
int CruiseShip::getMaxPassengers()
{
        return maxPassengers;
}

CruiseShip CruiseShip:: operator++(int)
{
        maxPassengers++;
        return *this;//temp;
}

CruiseShip CruiseShip:: operator+(const CruiseShip &rhs)const
{
        CruiseShip c;
        c.maxPassengers=maxPassengers+rhs.maxPassengers;
        return c;
}

istream &operator>>(istream &in,  CruiseShip &rhs)
{
        in>>rhs.maxPassengers;
        rhs.setMaxPassengers(rhs.maxPassengers);
        return in;
}
