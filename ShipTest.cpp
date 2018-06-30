
#include <iostream>
#include "CruiseShip.h"
#include "CargoShip.h"
using namespace std;

int main()
{
        cout<<"A. Hunter's Ship"<<endl;
        CruiseShip cruise1("Cruise 1", "1998", 100);
        CruiseShip cruise2("Cruise 2","1999",200);
        CruiseShip cHold=cruise1+cruise2;
        CruiseShip cruise3("Cruise 3","2004",300);
        CruiseShip cruise4("Cruise 4","3000",0);
        cout<<"import cruise 4 max passengers: ";
        cin>>cruise4;
        cout<<"\nCruise 1: "<<cruise1;
        cout<<"\nMax Passengers: "<<cruise1.getMaxPassengers()<<endl;
        cout<<"Cruise 2: "<<cruise2;
        cout<<"\nMax Passengers: "<<cruise2.getMaxPassengers()<<endl;
        cout<<"Cruise 3: "<<cruise3;
        cout<<"\nMax Passengers: "<<cruise3.getMaxPassengers();
        cout<<"\nCruise 4: "<<cruise4;
        cout<<"\nMax Passengers: "<<cruise4.getMaxPassengers();
        cout<<"\nCruise 1 + Cruise 2= "<<cHold.getMaxPassengers()<<endl;
        cruise3++;
        cout<<"Cruise 3 ++: "<<cruise3;
        cout<<"\nMax Passengers: "<<cruise3.getMaxPassengers()<<endl;

        CargoShip cargo1("Cargo 1", "1998", 100);
        CargoShip cargo2("Cargo 2","1999",200);
        CargoShip cAHold=cargo1+cargo2;
        CargoShip cargo3("Cargo 3","2004",300);

        cout<<"\nCargo 1: "<<cargo1;
        cout<<"\nMax Cargo: "<<cargo1.getCargoCapacity()<<endl;
        cout<<"Cargo 2: "<<cargo2;
        cout<<"\nMax Cargo: "<<cargo2.getCargoCapacity()<<endl;
        cout<<"Cargo 3: "<<cargo3;
        cout<<"\nMax Cargo: "<<cargo3.getCargoCapacity();
        cout<<"\nCargo 1 + Cargo 2= "<<cAHold.getCargoCapacity()<<endl;
        cargo3++;
        cout<<"Cargo 3 ++: "<<cargo3;
        cout<<"\nMax Cargo: "<<cargo3.getCargoCapacity()<<endl;
        return 0;
}
