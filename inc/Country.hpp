#ifndef COUNTRY_HPP
#define COUNTRY_HPP

#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Country {
private:
    string name;

public:
    Country(const string& countryName);
    ~Country();
    void ShowCountryInfo() const;
    string GetCountryName() const;
};

#endif // COUNTRY_HPP