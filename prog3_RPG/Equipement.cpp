#include "Equipement.h"

Equipement::Equipement(std::string nom, float valeur, float drop)
{
	m_nom = nom;
	m_valeur = valeur;
	m_drop = drop;
}

int Equipement::getDrop()
{
	return 0;
}
