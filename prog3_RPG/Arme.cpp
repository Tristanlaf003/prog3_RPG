#include "Arme.h"

Arme::Arme(int plage, std::string nom, float valeur, float drop) : Equipement(nom, valeur,drop)
{
    m_plage = plage;
}

int Arme::getDommage()
{
    return 0;
}

int Arme::getDrop()
{
    return 0;
}
