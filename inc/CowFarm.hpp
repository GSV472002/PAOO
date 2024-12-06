#ifndef COW_FARM_H
#define COW_FARM_H

#include <iostream>
#include "Farm.hpp"

using namespace std;

class CowFarm : public Farm 
{
private:
    int cowNumbers;
    double dailyMilkProduction;

public:
    CowFarm(const string &Name, const string &Address, int cowNumbers, double dailyMilkProduction)
        : Farm(Name, Address), cowNumbers(cowNumbers), dailyMilkProduction(dailyMilkProduction) 
        {
            cout << "[#COW_FARM_CONSTRUCTOR]: Ferma de vaci cu numele " << Name << " si adresa " << Address << " a fost creata." << endl
                 << "[#COW_FARM_CONSTRUCTOR]: Nr. vaci = " << cowNumbers << " vaci si productia zilnica de lapte = " << dailyMilkProduction << endl;
        }
    ~CowFarm();

    CowFarm (const CowFarm& cowFarm);// Copy-constructor
    CowFarm (CowFarm&& cowFarm) noexcept; // Move-constructor
    

    void DisplayFarmInformations() override
    {
        cout << "[#COW_FARM_INFO]: Ferma " << Name << " cu sediul in " << Address << endl;
        cout << "[#COW_FARM_INFO]: Are un total de " << cowNumbers << " vaci iar zilnic ele produc " << dailyMilkProduction << " litri de lapte " << endl;
    }

};

#endif