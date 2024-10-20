#pragma once
#include <iostream>
#include <unordered_map>
#include "Weapon.h"
#include "EWeapon.h"

class WeaponDatabase
{
public:
	static WeaponDatabase* getInstance();

public:
	std::unordered_map < Eweapon::EWeapon, std::vector<std::string>> GetDatabase();
	void printDatabase();
private:
	static WeaponDatabase* instance;
	WeaponDatabase();
	WeaponDatabase(const WeaponDatabase&);
	WeaponDatabase& operator = (const WeaponDatabase&);

	std::vector<std::string> polearmWeapons;
	std::vector<std::string> claymoreWeapons;
	std::vector<std::string> bowWeapons;
	std::vector<std::string> swordWeapons;
	std::vector<std::string> catalystWeapons;

	std::unordered_map < Eweapon::EWeapon, std::vector<std::string>> weaponDatabase;
};

