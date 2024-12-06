#include "../inc/Farm.hpp"
#include <string>

using namespace std;

// Copy-constructor
Farm::Farm(const Farm& farm) : Name(farm.Name), Address(farm.Address)
{
    cout << "[#FARM_COPY_CONSTRUCTOR]: Copierea fermei cu numele " << farm.Name << " si adresa " << farm.Address << "." << endl;
}

// Move-constructor
Farm::Farm(Farm&& farm) noexcept : Name(move(farm.Name)), Address(move(farm.Address))
{
    cout << "[#FARM_MOVE_CONSTRUCTOR]: Mutarea fermei cu numele " << farm.Name << " si adresa " << farm.Address << "." << endl;

    // Resetam starea obiectului sursa
    farm.Name = "";
    farm.Address = "";
}

// Destructor
Farm::~Farm()
{
    cout << "[#FARM_DESTRUCTOR]: Ferma cu numele " << Name << " si adresa " << Address << " a fost distrusa." << endl;
}
