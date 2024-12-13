#include "../inc/Continent.hpp"
#include <iostream>

Continent::Continent(const string &continentName) : name(continentName) {}

void Continent::AddCountry(shared_ptr<Country> country) {
    lock_guard<mutex> lock(mtx);
    countries.push_back(country);

    cout << "[" << country->GetCountryName() << "] a fost adaugata pe continentul " << name << endl;
}

void Continent::ShowCountries() const {
    lock_guard<mutex> lock(mtx);
    
    cout << "Continentul [" << name << "] contine urmatoarele tari:" << endl;
    for (const auto& country:countries)
    {
        country->ShowCountryInfo();
    }
}

string Continent::GetName() const {
    return name;
}