#pragma once
#include "Role.h"
class Magicien : public Role
{
public:
    int heal();
    int thunder();
    int fireball();
};

