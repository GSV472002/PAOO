#include "../inc/DonutShop/DonutShop.hpp"
#include <iostream>

using namespace std;

DonutShop::DonutShop(string shopName, int maxAllowedDonuts)
    : shopName(shopName), maxAllowedDonuts(maxAllowedDonuts), donutsCount(0)
    {
        shopShelves  = new Donut*[maxAllowedDonuts];
    }

DonutShop::~DonutShop()
{
    for (int i=0 ; i < donutsCount; ++i)
    {
        delete shopShelves[i];
    }

    delete[] shopShelves;
}

bool DonutShop::AddDonut(Donut* donut)
{
    if (donutsCount < maxAllowedDonuts)
    {
        shopShelves[donutsCount++] = donut;
        return true;
    }
    cout << "[#DONUT_SHOP]: Raftul este plin!\n";
    return false;
}

bool DonutShop::SellDonut()
{
    if (donutsCount > 0)
    {
        delete shopShelves[--donutsCount];
        return true;
    }
    else 
    {
        cout << "#[DONUT_SHOP]: Eroare! Nu mai exista gogosi pe raft, n-avem ce vinde :'( ..";
        return false;
    }
}

string getDonutFlavourName(AVAILABLE_FLAVOURS flavour)
{
    if(flavour == CHOCOLATE)
    {
        return "Ciocolata";
    }
    else if (flavour == VANILLA)
    {
        return "Vanilie";
    }
    else if (flavour == BLUEBERRY)
    {
        return "Afine";
    }
    else 
    {
        return "Zmeura";
    }
}

string getDonutSizeName(AVAILABLE_SIZE size)
{
    if (size == SMALL)
    {
        return "mica";
    }
    else if (size == MEDIUM)
    {
        return "medie";
    }
    else if (size == BIG){
        return "mare";
    }
    else 
    {
        return "gigantica";
    }
}

void DonutShop::DisplayInventory() const
{
    if (donutsCount == 0)
    {
        cout << "[#DONUT_SHOP]: Nu exita gogosi pe raft..";
        return;
    }

    cout << "[#DONUT_SHOP]: In magazinul " << shopName << "Avem urmatoarele produse pe raft:\n";
    for (int i=0; i < donutsCount; ++i)
    {
        cout << "[#DONUT_SHOP]: Gogoasa cu aroma de [" << getDonutFlavourName(shopShelves[i]->getDonutFlavour()) << "], dimensiunea [" << getDonutSizeName(shopShelves[i]->getDonutSize()) << "] la pretul: " << shopShelves[i]->getDonutPrice() << " lei\n"; 
    }   
}

bool DonutShop::operator=(const DonutShop &other)
{
    if (this != &other)
    {
        if (donutsCount > 0 && other.donutsCount > 0)
        {
            // Comparam pretul primei gogosi din fiecare magazin
            if (shopShelves[0]->getDonutPrice() < other.shopShelves[0]->getDonutPrice())
            {
                cout << "[#DONUT_SHOP]: Gogoasa din " << other.shopName << " este mai scumpa." << endl;
                return false;
            }
            else if (shopShelves[0]->getDonutPrice() > other.shopShelves[0]->getDonutPrice())
            {
                cout << "[#DONUT_SHOP]: Gogoasa din " << shopName << " este mai scumpa." << endl;
                return true;
            }
            else
            {
                cout << "[#DONUT_SHOP]: Pretul gogosilor este egal." << endl;
                return false;
            }
        }
    }
    return false;
}
