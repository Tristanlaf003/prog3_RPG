#pragma once
#include <iostream>
#include "Equipement.h"
class Arme: public Equipement
{
private:
	int m_plage;
public:
	Arme(int plage, std::string nom, float valeur, float drop);
	int getDommage();

	// Hérité via Equipement
	virtual int getDrop() override;
};

