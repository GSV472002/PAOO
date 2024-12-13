#include "../inc/Country.hpp"
#include "../config/debug_mode.hpp"
#include <iostream>

using namespace std;

Country::Country(const string &countryName): name(countryName){
    #if DEBUG_MODE == 1
        cout << "[#DEBUG_MODE]: Country object with name `" << name << "` was created.\n" << endl;
    #endif
}

Country::~Country() {
    #if DEBUG_MODE == 1
        cout << "[#DEBUG_MODE]: Country object with name `" << name << "` was destroyed.\n" << endl;
    #endif
}

void Country::ShowCountryInfo() const {
    cout << "Tara: " << name << endl;
}

string Country::GetCountryName() const {
    return name;
}