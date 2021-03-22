#include "Armure.h"

Armure::Armure(std::string nom, float valeur, float drop, constantes::TypeJoueur user, constantes::Rarete rarete, int coefDefense) :
    Equipement(nom, valeur, drop, user, rarete), m_coefDefense{ coefDefense }{}


int Armure::getCoefDefense()
{
    return m_coefDefense;
}

