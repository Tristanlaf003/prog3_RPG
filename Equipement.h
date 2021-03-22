#ifndef EQUIPEMENT_DEF
#define EQUIPEMENT_DEF

//#include"Joueur.h"
#include"Constantes.h"
#include<iostream>
#include<list>


class Equipement
{
protected:
	Equipement(std::string nom, float valeur, float drop, constantes::TypeJoueur user, constantes::Rarete rarete);
	std::string m_nom;
	float m_valeur;
	float m_drop;
	constantes::TypeJoueur m_user;
	constantes::Rarete m_rarete;
public:
	virtual float getDrop();
};

#endif 




