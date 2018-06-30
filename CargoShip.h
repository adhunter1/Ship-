#ifndef CARGOSHIP_H_

#define CARGOSHIP_H_
#include "Ship.h"
#include <iostream>
#include <string>
using namespace std;
class CargoShip: public Ship
{
        private:
               int cargoCapacity;
       public:
                CargoShip();
                CargoShip(string, string , int );
                CargoShip operator++(int);//int);
                CargoShip operator+(const CargoShip &rhs) const;
                void setCargoCapacity(int );
                int getCargoCapacity();


};
#endif
