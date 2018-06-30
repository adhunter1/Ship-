
#include "Ship.h"
#include <iostream>
#include <string>
using namespace std;

Ship::Ship()
{
        name="";
        year="";
}
Ship::Ship(string n, string y)
{
        name=n;
        year=y;
}
void Ship::setYear(string y)
{
        year=y;
}
string Ship::getYear()
{
        return year;
}
void Ship:: setName(string n)
{
        name=n;
}
string Ship:: getName()
{
        return name;
}
ostream &operator<<(ostream &out, const Ship &rhs)
{
      out<<"Name: "<<rhs.name<<"\nYear: "<<rhs.year;
      return out;
}
