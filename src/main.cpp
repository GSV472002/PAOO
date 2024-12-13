#include <iostream>
#include <memory>
#include <thread>

#include "../inc/Continent.hpp"
#include "../constants/Earth.hpp"

using namespace std;

void AddCountries(shared_ptr<Continent> continent) {
    continent->AddCountry(make_shared<Country>("Romania"));
    continent->AddCountry(make_shared<Country>("Italia"));
}

int main(void)
{
    unique_ptr<Continent> europa = make_unique<Continent>(ContinentToString(ContinentsLists::Europa));
    shared_ptr<Continent> sharedContinent = move(europa);

    thread thread1(AddCountries, sharedContinent);
    thread thread2(AddCountries, sharedContinent);

    thread1.join();
    thread2.join();

    sharedContinent->ShowCountries();

    return 0;
}