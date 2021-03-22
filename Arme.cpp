#include "Arme.h"
#include"Utiliter.h"

Arme::Arme(std::string nom, float valeur, float drop, constantes::TypeJoueur user, constantes::Rarete rarete, float plageMin, float plageMax) :
	Equipement(nom, valeur, drop, user, rarete), m_plageMin{ plageMin }, m_plageMax{ plageMax }
{
	plageMin* ModifierPlage();
	plageMax* ModifierPlage();
}

float Arme::ModifierPlage()
{
	switch (m_rarete)
	{
	case constantes::Rarete::commun:
		return 1;
	case constantes::Rarete::rare:
		return 1.2;
	case constantes::Rarete::epique:
		return 1.4;
	case constantes::Rarete::legendaire:
		return 1.5;
	}
}


int Arme::getDommage()
{
	return genererNombreAleatoire(m_plageMin, m_plageMax);
}
