#pragma once
#include <iostream>
#include "Role.h"
#include "Arme.h"
#include "Armure.h"
#include "Acteur.h"
#include "Equipement.h"
class Joueur : public Acteur
{
private:
	Role* m_role;
	Arme* m_arme;
	Armure* m_armure;
public:
	Joueur(Role* role, Arme* arme, Armure* armure, std::string nom, int niveau, int xp, int hp_max, int hp);
	void Agir(Acteur* acteur);
	int recevoirDegat(int degat);
	int recevoirXp(int xp);
	int getCoDefense();
	int getCoAttaque();
};

