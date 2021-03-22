#include "Acteur.h"

Acteur::Acteur(std::string nom,int niveau, int xp, int hp_max, int hp)
{
    m_niveau = niveau;
    m_xp = xp;
    m_hp_max = hp_max;
    m_hp = hp;
}

void Acteur::Agir(Acteur* acteur)
{
}

int Acteur::RecevoirDegat(double degat)
{
    return 0;
}

int Acteur::RecevoirXp(int)
{
    return 0;
}
