#include "Ennemis.h"

Ennemis::Ennemis(Equipement* inventaire, int dommageBase, std::string nom,int niveau, int xp, int hp_max, int hp) : Acteur(nom,niveau,xp,hp_max,hp)
{
	m_inventaire[0] = inventaire;
	m_dommageBase = dommageBase;
}

void Ennemis::Attack(Acteur* acteur)
{

}

void Ennemis::recevoirDegat(int degat)
{
}
