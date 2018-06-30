#ifndef SHIP_H_

#define SHIP_H_
#include <iostream>
#include <string>
using namespace std;
class Ship
{
        private:
                string name;
                string year;
       public:
                Ship();
                Ship(string, string);
                void setYear(string);
                string getYear();
                void setName(string);
                string getName();
                friend ostream &operator<<(ostream &out, const Ship &rhs);

};
#endif
