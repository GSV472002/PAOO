#include "../inc/Farm.hpp"
#include <string>

using namespace std;

// Copy-constructor
Farm::Farm(const Farm& farm) : Name(farm.Name), Address(farm.Address)
{
    cout << "[#FARM_INFO]: Copierea fermei cu numele " << farm.Name << " si adresa " << farm.Address << "." << endl;
}

// Move-constructor
Farm::Farm(Farm&& farm) noexcept : Name(move(farm.Name)), Address(move(farm.Address))
{
    cout << "[#FARM_INFO]: Mutarea fermei cu numele " << farm.Name << " si adresa " << farm.Address << "." << endl;

    // Resetăm starea obiectului sursă
    farm.Name = "";
    farm.Address = "";
}

// Destructor
Farm::~Farm()
{
    cout << "[#FARM_INFO]: Ferma cu numele " << Name << " si adresa " << Address << " a fost distrusa." << endl;
}
