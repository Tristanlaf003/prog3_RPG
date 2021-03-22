#include "Equipement.h"

Equipement::Equipement(std::string nom, float valeur, float drop, constantes::TypeJoueur user, constantes::Rarete rarete) :
	m_nom{ nom },
	m_valeur{ valeur },
	m_drop{ drop },
	m_user{ user },
	m_rarete{ rarete }
{}

float Equipement::getDrop()
{
	return m_drop;
}

constantes::TypeJoueur Equipement::getTypeJoueur()
{
	return m_user;
}
