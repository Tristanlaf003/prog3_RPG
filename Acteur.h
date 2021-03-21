#pragma once
#include <iostream>
class Acteur
{
protected:
	std::string m_nom;
	int m_niveau;
	int m_xp;
	int m_hp_max;
	int m_hp;
public:
	Acteur(std::string nom,int niveau, int xp, int hp_max, int hp);
	virtual void Attack(Acteur* acteur);
	virtual int RecevoirDegat(double degat);
	virtual int RecevoirXp(int xp);
	
};

