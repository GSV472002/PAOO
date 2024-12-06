#ifndef FARM_H
#define FARM_H

#include <iostream>
#include <string>

using namespace std;

class Farm 
{
protected:
    string Name;
    string Address;

public:
    Farm(const string &Name, const string &Address) : Name(Name), Address(Address)
    {
        cout << "[#FARM_CONSTRUCTOR]: Ferma cu numele " << Name << " si adresa " << Address << " a fost creata." << endl;
    }
    //Farm(const Farm&) = delete; // [Dezactivare] copy-constructor
    //Farm(Farm&) = delete; // [Dezactivare] move-constructor
    
    Farm (const Farm& farm);// Copy-constructor
    Farm (Farm&& farm) noexcept; // Move-constructor
    
    virtual ~Farm();

    virtual void DisplayFarmInformations()
    {
        cout << "[#FARM_INFO]: Ferma " << Name << " cu sediul in " << Address << endl;
    }
};

#endif