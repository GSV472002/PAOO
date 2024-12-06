#include "../inc/CowFarm.hpp"
#include <string>

using namespace std;

// Copy constructor
CowFarm::CowFarm(const CowFarm& cowFarm)
    : Farm(cowFarm), cowNumbers(cowFarm.cowNumbers), dailyMilkProduction(cowFarm.dailyMilkProduction)
{
    cout << "[#COW_FARM_INFO]: Copierea fermei de vaci cu numele " << cowFarm.Name
         << " si adresa " << cowFarm.Address << "." << endl
         << "[#COW_FARM_INFO]: Nr. vaci = " << cowNumbers
         << " vaci si productia zilnica de lapte = " << dailyMilkProduction << " litri." << endl;
}

// Move constructor
CowFarm::CowFarm(CowFarm&& cowFarm) noexcept
    : Farm(move(cowFarm)), cowNumbers(cowFarm.cowNumbers), dailyMilkProduction(cowFarm.dailyMilkProduction)
{
    cout << "[#COW_FARM_INFO]: Mutarea fermei de vaci cu numele " << cowFarm.Name
         << " si adresa " << cowFarm.Address << "." << endl;

    // Resetăm starea obiectului sursă
    cowFarm.cowNumbers = 0;
    cowFarm.dailyMilkProduction = 0.0;
}

// Destructor
CowFarm::~CowFarm()
{
    cout << "[#COW_FARM_INFO]: Ferma de vaci cu numele " << Name
         << " si adresa " << Address << " a fost distrusa." << endl;
}
