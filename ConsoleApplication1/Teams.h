#pragma once

#include<iostream>
#include <unordered_map>
#include "EElement.h"
#include"Character.h"

class Teams
{
public:
	Teams();
	~Teams();


	void addCharacters();
	std::vector<Characters*> GetTeamComp();
private:
	void characterList();

	std::vector<Characters*> TeamComp;
	std::vector < std::string > pyroUnits;
	std::vector < std::string > hydroUnits;
	std::vector < std::string > electroUnits;
	std::vector < std::string > cryoUnits;
	std::vector < std::string > anemoUnits;
	std::vector < std::string > geoUnits;
	std::vector < std::string > dendroUnits;
	std::unordered_map < EElement, std::vector< std::string> > allCharacters;
};

