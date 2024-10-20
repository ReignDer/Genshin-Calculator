#pragma once
#include <string>
namespace Weapon {
	class Weapon
	{
	public:
		Weapon(std::string name, float baseAtk, float mainStat);
		Weapon(std::string name, float baseAtk);
		Weapon(std::string name);
		~Weapon();

		std::string getName();
		float getBaseATK();
	private:
		float baseAtk;
		float mainStat;

		std::string name;
	};
}

