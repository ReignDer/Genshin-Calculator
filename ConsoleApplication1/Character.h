#pragma once
#include "Artifact.h"
#include "EElement.h"
#include "EWeapon.h"
#include "Weapon.h"
class Characters
{
public:
	Characters(std::string name, EElement Etype, int level, float baseAtk, float elementalMastery, float critDmg);
	Characters(std::string name, float baseAtk, float baseDef, float elementalMastery, EElement Etype);
	~Characters();

	std::string GetName();
	Weapon::Weapon* getWeapon();
	float getBaseAtk();
	float getEM();
	float getCD();
	int getLVL();
	void setCharacterLevel(int setLevel);
	void attachWeapon(Weapon::Weapon* weapon, Eweapon::EWeapon EWeaponType);

private:
	float baseAtk;
	float baseDef;
	float elementalMastery;
	float critDmg;
	int level;

	std::string name;
	EElement EType;
	Eweapon::EWeapon EWeaponType;
	Weapon::Weapon* weapon;

	std::vector<Artifact> artifactSet;
};

