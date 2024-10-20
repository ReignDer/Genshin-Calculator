#include "Character.h"

Characters::Characters(std::string name, EElement Etype = EElement::NONE, int level = 1, float baseAtk = 100.f, float elementalMastery = 100.f, float critDmg = 0.5f)
	: name(name), EType(Etype), level(level), baseAtk(baseAtk), elementalMastery(elementalMastery), critDmg(critDmg)
{

}

Characters::Characters(std::string name, float baseAtk, float baseDef, float elementalMastery, EElement Etype = EElement::NONE) :
	name(name), baseAtk(baseAtk), baseDef(baseDef), elementalMastery(elementalMastery), EType(Etype)
{
}

Characters::~Characters()
{
}

std::string Characters::GetName()
{
	return name;
}

Weapon::Weapon* Characters::getWeapon()
{
	return weapon;
}

float Characters::getBaseAtk()
{
	return baseAtk;
}

float Characters::getEM()
{
	return elementalMastery;
}

float Characters::getCD()
{
	return critDmg;
}

int Characters::getLVL()
{
	return level;
}

void Characters::setCharacterLevel(int setLevel)
{
	level = setLevel;
}

void Characters::attachWeapon(Weapon::Weapon* weapon = NULL, Eweapon::EWeapon EWeaponType = Eweapon::EWeapon::NONE)
{

	this->weapon = weapon;
	this->EWeaponType = EWeaponType;
}
