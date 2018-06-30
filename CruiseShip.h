#ifndef CRUISESHIP_H_

#define CRUISESHIP_H_
#include "Ship.h"
#include <iostream>
#include <string>
using namespace std;
class CruiseShip:public Ship
{
        private:
                int maxPassengers;
       public:
                CruiseShip();
                CruiseShip(string, string , int );
                friend istream &operator>>(istream &in, CruiseShip &rhs);

                CruiseShip operator++(int);//int);
                CruiseShip operator+(const CruiseShip &rhs) const;
                void setMaxPassengers(int m);
                int getMaxPassengers();


};
#endif
