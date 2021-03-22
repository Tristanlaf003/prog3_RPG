#pragma once
#include <iostream>
#include "Acteur.h"
#include "Equipement.h"
class Ennemis:public Acteur
{
private:
	Equipement* m_inventaire[3];
	int m_dommageBase;
public:
	Ennemis(Equipement* inventaire, int dommageBase, std::string nom, int niveau, int xp, int hp_max, int hp);
	void Attack(Acteur* acteur);
	void recevoirDegat(int degat);
};

