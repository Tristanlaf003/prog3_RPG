#pragma once
#include <iostream>
class Equipement
{
protected:
	std::string m_nom;
	enum m_rarete
	{
		commun,
		rare,
		épique,
		légendaire
	};
	float m_valeur;
	float m_drop;
	enum m_user
	{
		guerrier,
		magicien,
		assassin,
		chevalier,
		sorcier,
		ombre
	};
public:
	Equipement(std::string nom,float valeur, float drop);
	virtual int getDrop() = 0;
};

