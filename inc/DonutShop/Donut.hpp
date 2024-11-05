#ifndef DONUT_H
#define DONUT_H

enum AVAILABLE_FLAVOURS 
{
    CHOCOLATE,
    VANILLA,
    BLUEBERRY,
    RASPERBERRY,
    STRAWBERRY,
    APRICOTS,
};

enum AVAILABLE_SIZE 
{
    SMALL = 0,
    MEDIUM = 1,
    BIG = 2,
    GIGANT = 3
};

enum AVAILABLE_PRICES 
{ 
    SMALL_SIZE_PRICE = 3,
    MEDIUM_SIZE_PRICE = 6,
    BIG_SIZE_PRICE = 10,
    GIGANT_SIZE_PRICE = 13
};

class Donut
{
private:
    AVAILABLE_FLAVOURS donutFlavour;
    AVAILABLE_SIZE donutSize;
    AVAILABLE_PRICES donutPrice;

public:
    Donut(AVAILABLE_FLAVOURS flavour, AVAILABLE_SIZE size, AVAILABLE_PRICES price);

    AVAILABLE_FLAVOURS getDonutFlavour() const;
    AVAILABLE_SIZE getDonutSize() const;
    AVAILABLE_PRICES getDonutPrice() const;
};

#endif