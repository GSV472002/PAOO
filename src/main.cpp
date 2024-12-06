#include <iostream>
#include "../inc/Farm.hpp"
#include "../inc/CowFarm.hpp"

using namespace std;

int main() {
    // Creare obiect Farm
    Farm farm1("Ferma Generica", "Jud. Timis");
    cout << endl;

    // Creare obiect CowFarm
    CowFarm cowFarm1("Ferma Lactis", "Jud. Arad", 120, 2000.0);
    cout << endl;

    // Testare Copy Constructor pentru Farm
    Farm farm2 = farm1; // Copy constructor
    cout << endl;

    // Testare Copy Constructor pentru CowFarm
    CowFarm cowFarm2 = cowFarm1; // Copy constructor
    cout << endl;

    // Testare Move Constructor pentru Farm
    Farm farm3 = move(farm1); // Move constructor
    cout << endl;

    // Testare Move Constructor pentru CowFarm
    CowFarm cowFarm3 = move(cowFarm1); // Move constructor
    cout << endl;

    farm2.DisplayFarmInformations();
    cout << endl;

    cowFarm2.DisplayFarmInformations();
    cout << endl;

    farm3.DisplayFarmInformations();
    cout << endl;

    cowFarm3.DisplayFarmInformations();
    cout << endl;

    return 0; // Destructorii vor fi apelati automat la final
}
