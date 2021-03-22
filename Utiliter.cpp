#include "Utiliter.h"
#include<random>

int genererNombreAleatoire(int min, int max)
{
	std::random_device rd;
	std::mt19937 rn(rd());
	std::uniform_int_distribution<> rng(min, max);

	return rng(rn);
}
