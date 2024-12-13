#ifndef CONTINENT_HPP
#define CONTINENT_HPP

#include "country.hpp"
#include <string>
#include <vector>
#include <mutex>

using namespace std;

class Continent {
private:
    string name;
    vector<shared_ptr<Country>> countries;
    mutable mutex mtx;

public:
    Continent(const string& continentName);
    ~Continent();
    void AddCountry(shared_ptr<Country> country);
    void ShowCountries() const;
    string GetName() const;
};

#endif