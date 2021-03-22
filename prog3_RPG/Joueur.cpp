#include "Joueur.h"

Joueur::Joueur(Role* role, Arme* arme, Armure* armure, std::string nom, int niveau, int xp, int hp_max, int hp) : Acteur(nom, niveau, xp, hp_max, hp)
{
	m_role = role;
	m_arme = arme;
	m_armure = armure;
}

void Joueur::attack(Acteur* acteur)
{
}

int Joueur::recevoirDegat(int degat)
{
	return 0;
}

int Joueur::recevoirXp(int xp)
{
	return 0;
}

int Joueur::getCoDefense()
{
	return 0;
}

int Joueur::getCoAttaque()
{
	return 0;
}
