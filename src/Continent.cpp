#include "../inc/Continent.hpp"
#include "../config/debug_mode.hpp"
#include <iostream>

using namespace std;

Continent::Continent(const string &continentName) : name(continentName) {
    #if DEBUG_MODE == 1
        cout << "[#DEBUG_MODE]: Continent object with name `" << name << "` was created.\n" << endl;
    #endif
}

Continent::~Continent() {
    #if DEBUG_MODE == 1
        cout << "[#DEBUG_MODE]: Continent object with name `" << name << "` was destroyed.\n" << endl;
    #endif
}

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