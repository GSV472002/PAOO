#include "DonutShop.hpp"

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
    else {
        cout << "[#DONUT_SHOP]: Raftul este plin!\n";
        return false;
    }
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
        cout << "Gogoasa cu aroma de " << shopShelves[i]->getDonutFlavour() << ", dimensiunea " << shopShelves[i]->getDonutSize() << " la pretul: " << shopShelves[i]->getDonutPrice() << "\n"; 
    }
}