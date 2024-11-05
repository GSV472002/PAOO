#ifndef DONUT_SHOP_H
#define DONUT_SHOP_H // [#REMINDER]: asta vs #pragma once? Stackoverflow zice da, google zice ba.. which one??

#include "Donut.hpp"
#include <string>

using namespace std;

class DonutShop
{
public:
    DonutShop(string shopName, int maxAllowedDonuts); // Items in cazul meu --> gogosi
    ~DonutShop();

    bool AddDonut(Donut *donut);
    bool SellDonut();
    void DisplayInventory() const;

private:
    string shopName;
    Donut** shopShelves;

    int shelfSize;
    int donutsCount;
};

#endif