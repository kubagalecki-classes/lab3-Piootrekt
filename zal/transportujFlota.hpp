#pragma once

#include "Stocznia.hpp"
#include <typeinfo>

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int towar_trans = 0;
    unsigned int licz_zagle = 0;
    while (towar_trans < towar)
    {
        Stocznia stocznia{};
        Statek* s1 = stocznia();
        towar_trans += s1 -> transportuj();
        if (typeid(*s1).name() == typeid(class Zaglowiec).name())
        {
            licz_zagle++;
        }
    }
    return licz_zagle;
}