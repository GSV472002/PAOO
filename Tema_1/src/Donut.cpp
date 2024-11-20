#include <iostream>
#include "../inc/DonutShop/Donut.hpp"

Donut::Donut(AVAILABLE_FLAVOURS flavour, AVAILABLE_SIZE size, AVAILABLE_PRICES price)
     : donutFlavour(flavour), donutSize(size), donutPrice(price) {}

Donut::~Donut() {} // [#REMINDER]: Nu-i neaparat necesar dar l-am pus ca reminder sa explic motivul.

AVAILABLE_FLAVOURS Donut::getDonutFlavour() const 
{
    return donutFlavour;
}

AVAILABLE_PRICES Donut::getDonutPrice() const 
{
    return donutPrice;
}

AVAILABLE_SIZE Donut::getDonutSize() const
{
    return donutSize;
}

