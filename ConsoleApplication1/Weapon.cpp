#include "Weapon.h"

Weapon::Weapon::Weapon(std::string name, float baseAtk, float mainStat) : name(name), baseAtk(baseAtk), mainStat(mainStat)
{
}

Weapon::Weapon::Weapon(std::string name, float baseAtk) : name(name), baseAtk(baseAtk)
{
}

Weapon::Weapon::Weapon(std::string name) : name(name)
{
}

Weapon::Weapon::~Weapon()
{
}

std::string Weapon::Weapon::getName()
{
	return name;
}

float Weapon::Weapon::getBaseATK()
{
	return baseAtk;
}
