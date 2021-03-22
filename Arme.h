#ifndef ARME_DEF
#define ARME_DEF
#include "Equipement.h"

class Arme :
    public Equipement
{
private:
    //Plage minimum de l'arme
    float m_plageMin;
    //Plage maximum de l'arme
    float m_plageMax;
    //Modifie la plage min et max avec la qualité de l'arme
    float ModifierPlage();
public:
    Arme(std::string nom, float valeur, float drop, constantes::TypeJoueur user, constantes::Rarete rarete, float plageMin, float plageMax);
    //Calcule les dommages de l'arme avec un nombre aléatoire entre la plage min et max
    int getDommage();
};
#endif

