#include "Armure.h"

Armure::Armure(int coefdefense, std::string nom, float valeur, float drop) : Equipement(nom,valeur,drop)
{
	m_coefdefense = coefdefense;
}

int Armure::getDrop()
{
	return 0;
}
