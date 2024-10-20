#pragma once
#include <iostream>
#include "Teams.h"
#include "WeaponDatabase.h"
#include "Calculator.h"
class Menu
{
public:
	Menu();
	~Menu();

	void Run();
	void CreateTeams();
	void AddCharacters();
	void AddWeapon();
	void AddArtifacts();
	void TeamDetails();
	void CalcDmg();

private:
	bool is_Running;
	Teams* teams;

	void StartMenu();
	void PickWeapon(int index);
};

