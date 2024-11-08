#include <iostream>
#include "../inc/DonutShop/Donut.hpp"
#include "../inc/DonutShop/DonutShop.hpp"

using namespace std;

#define MAX_DONUTS_FIRST_SHOP 5
#define MAX_DOUNTS_SECOND_SHOP 6

int main(void)
{
    DonutShop myShop("Gogoasa furioasa", MAX_DONUTS_FIRST_SHOP);

    Donut *chocolateDonut = new Donut(AVAILABLE_FLAVOURS::CHOCOLATE, AVAILABLE_SIZE::MEDIUM, AVAILABLE_PRICES::MEDIUM_SIZE_PRICE);
    Donut *vanillaDonut = new Donut(AVAILABLE_FLAVOURS::VANILLA, AVAILABLE_SIZE::BIG, AVAILABLE_PRICES::BIG_SIZE_PRICE);
    Donut *strawberryDonut = new Donut(AVAILABLE_FLAVOURS::RASPERBERRY, AVAILABLE_SIZE::SMALL, AVAILABLE_PRICES::SMALL_SIZE_PRICE);

    myShop.AddDonut(chocolateDonut);
    myShop.AddDonut(vanillaDonut);
    myShop.AddDonut(strawberryDonut);

    myShop.DisplayInventory();

    // Sell a donut and display the updated inventory
    cout << "\n[#DONUT_SHOP]: Vindem o gogoasa...\n";
    myShop.SellDonut();
    myShop.DisplayInventory();

    cout << "\n[#DONUT_SHOP]: Vindem alta gogoasa...\n";
    myShop.SellDonut();
    myShop.DisplayInventory();

    cout << "\n[#DONUT_SHOP]: Vindem ultima gogoasa...\n";
    myShop.SellDonut();
    myShop.DisplayInventory();

    //cout << "\n[#DONUT_SHOP]: Folosim operatorul egal...\n";

    DonutShop anotherShop("Gogoasa cu comori", MAX_DOUNTS_SECOND_SHOP);
    Donut *fancyDonut = new Donut(AVAILABLE_FLAVOURS::RASPERBERRY, AVAILABLE_SIZE::BIG, AVAILABLE_PRICES::BIG_SIZE_PRICE);
    anotherShop.AddDonut(fancyDonut);

    myShop = anotherShop;

    return 0;
}