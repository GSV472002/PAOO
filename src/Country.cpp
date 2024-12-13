#include "../inc/Country.hpp"
#include <iostream>

using namespace std;

Country::Country(const string &countryName): name(countryName){}

void Country::ShowCountryInfo() const {
    cout << "Tara: " << name << endl;
}

string Country::GetCountryName() const {
    return name;
}