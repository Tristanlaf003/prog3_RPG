#pragma once
#include "Role.h"
class Guerrier: public Role
{
public:
	Guerrier();
	double slash();
	int kick();
	int protect();
};

