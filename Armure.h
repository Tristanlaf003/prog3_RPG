#pragma once
#include <iostream>
#include "Equipement.h"
class Armure: public Equipement
{
private:
	int m_coefdefense;
public:
	Armure(int coefdefense, std::string nom, float valeur, float drop);
	// H�rit� via Equipement
	virtual int getDrop() override;
};

