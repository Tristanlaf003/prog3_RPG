#ifndef ARMURE_DEF
#define ARMURE_DEF
#include "Equipement.h"

class Armure :
    public Equipement
{
private:
    int m_coefDefense;
public:
    Armure(std::string nom, float valeur, float drop, constantes::TypeJoueur user, constantes::Rarete rarete, int coefDefense);
    int getCoefDefense();
};
#endif

