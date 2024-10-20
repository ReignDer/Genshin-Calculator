#include "Teams.h"


Teams::Teams()
{
	//PYRO
	pyroUnits.push_back("Arlecchino");
	pyroUnits.push_back("Dehya");
	pyroUnits.push_back("Diluc");
	pyroUnits.push_back("Hu Tao");
	pyroUnits.push_back("Klee");
	pyroUnits.push_back("Lyney");
	pyroUnits.push_back("Yoimiya");
	pyroUnits.push_back("Amber");
	pyroUnits.push_back("Bennett");
	pyroUnits.push_back("Chevreuse");
	pyroUnits.push_back("Gaming");
	pyroUnits.push_back("Thoma");
	pyroUnits.push_back("Xiangling");
	pyroUnits.push_back("Xinyan");
	pyroUnits.push_back("Yanfei");

	allCharacters[EElement::PYRO] = pyroUnits;

	//HYDRO
	hydroUnits.push_back("Ayato");
	hydroUnits.push_back("Furina");
	hydroUnits.push_back("Kokomi");
	hydroUnits.push_back("Mona");
	hydroUnits.push_back("Mualani");
	hydroUnits.push_back("Neuvillette");
	hydroUnits.push_back("Nilou");
	hydroUnits.push_back("Sigewinne");
	hydroUnits.push_back("Tartaglia");
	hydroUnits.push_back("Traveler");
	hydroUnits.push_back("Yelan");
	hydroUnits.push_back("Barbara");
	hydroUnits.push_back("Candace");
	hydroUnits.push_back("Xingqiu");

	
	allCharacters[EElement::HYDRO] = hydroUnits;

	//ELECTRO
	electroUnits.push_back("Clorinde");
	electroUnits.push_back("Cyno");
	electroUnits.push_back("Keqing");
	electroUnits.push_back("Raiden");
	electroUnits.push_back("Traveler");
	electroUnits.push_back("Yae Miko");
	electroUnits.push_back("Beidou");
	electroUnits.push_back("Dori");
	electroUnits.push_back("Fischl");
	electroUnits.push_back("Lisa");
	electroUnits.push_back("Razor");
	electroUnits.push_back("Sara");
	electroUnits.push_back("Sethos");
	electroUnits.push_back("Shinobu");

	allCharacters[EElement::ELECTRO] = electroUnits;


	//CRYO
	cryoUnits.push_back("Aloy");
	cryoUnits.push_back("Ayaka");
	cryoUnits.push_back("Eula");
	cryoUnits.push_back("Ganyu");
	cryoUnits.push_back("Qiqi");
	cryoUnits.push_back("Shenhe");
	cryoUnits.push_back("Wriothesley");
	cryoUnits.push_back("Charlotte");
	cryoUnits.push_back("Chongyun");
	cryoUnits.push_back("Diona");
	cryoUnits.push_back("Freminet");
	cryoUnits.push_back("Kaeya");
	cryoUnits.push_back("Layla");
	cryoUnits.push_back("Mika");
	cryoUnits.push_back("Rosaria");

	allCharacters[EElement::CRYO] = cryoUnits;



	//ANEMO
	anemoUnits.push_back("Jean");
	anemoUnits.push_back("Kazuha");
	anemoUnits.push_back("Traveler");
	anemoUnits.push_back("Wanderer");
	anemoUnits.push_back("Xianyun");
	anemoUnits.push_back("Xiao");
	anemoUnits.push_back("Faruzan");
	anemoUnits.push_back("Heizou");
	anemoUnits.push_back("Lynette");
	anemoUnits.push_back("Diona");
	anemoUnits.push_back("Sayu");
	anemoUnits.push_back("Sucrose");

	allCharacters[EElement::ANEMO] = anemoUnits;



	//GEO
	geoUnits.push_back("Albedo");
	geoUnits.push_back("Chiori");
	geoUnits.push_back("Itto");
	geoUnits.push_back("Navia");
	geoUnits.push_back("Traveler");
	geoUnits.push_back("Xilonen");
	geoUnits.push_back("Zhongli");
	geoUnits.push_back("Gorou");
	geoUnits.push_back("Kachina");
	geoUnits.push_back("Ningguang");
	geoUnits.push_back("Noelle");
	geoUnits.push_back("Yun Jin");

	allCharacters[EElement::GEO] = geoUnits;
	

	//DENDRO
	dendroUnits.push_back("Alhaitham");
	dendroUnits.push_back("Baizhu");
	dendroUnits.push_back("Emilie");
	dendroUnits.push_back("Kinich");
	dendroUnits.push_back("Nahida");
	dendroUnits.push_back("Tighnari");
	dendroUnits.push_back("Traveler");
	dendroUnits.push_back("Collei");
	dendroUnits.push_back("Kaveh");
	dendroUnits.push_back("Kirara");
	dendroUnits.push_back("Yaoyao");

	allCharacters[EElement::DENDRO] = dendroUnits;


}

void Teams::characterList()
{
	int index = 0;
	for (auto i = allCharacters.begin(); i != allCharacters.end(); i++) {
		switch (i->first)
		{
		case EElement::PYRO:
			std::cout << "PYRO\n";
			break;
		case EElement::HYDRO:
			std::cout << "HYDRO\n";
			break;
		case EElement::ELECTRO:
			std::cout << "ELECTRO\n";
			break;
		case EElement::CRYO:
			std::cout << "CRYO\n";
			break;
		case EElement::ANEMO:
			std::cout << "ANEMO\n";
			break;
		case EElement::GEO:
			std::cout << "GEO\n";
			break;
		case EElement::DENDRO:
			std::cout << "DENDRO\n";
			break;
		default:
			break;
		}

		for (int j = 0; j < i->second.size(); j++) {
			std::cout << "[" << index + 1 << "] " << i->second[j] << std::endl;
			index++;
		}
		std::cout << "\n\n";
		
	}
}

void Teams::addCharacters()
{
	int choice;
	characterList();
	std::cout << "> ";
	std::cin >> choice;

	int index = 1;
	for (auto i = allCharacters.begin(); i != allCharacters.end(); i++) {
		for (int j = 0; j < i->second.size(); j++) {
			if (index == choice) {
				if (TeamComp.size() == 4) {
					std::cout << "Team is Full!\n";
					return;
				}
				int level;
				float baseAtk;
				float elementalMastery;
				float critDmg;
				std::cout << "Set " << i->second[j] << "'s " "Level\n";
				std::cout << "> ";
				std::cin >> level;

				std::cout << "Set " << i->second[j] << "'s " "Base Attack\n";
				std::cout << "> ";
				std::cin >> baseAtk;
				
				std::cout << "Set " << i->second[j] << "'s " "Elemental Mastery\n";
				std::cout << "> ";
				std::cin >> elementalMastery;
				
				std::cout << "Set " << i->second[j] << "'s " "Crit Damage\n";
				std::cout << "> ";
				std::cin >> critDmg;

				critDmg = critDmg / 100.f;

				TeamComp.emplace_back(new Characters(i->second[j], i->first, level, baseAtk, elementalMastery, critDmg));
			
				return;
			}
		
			index++;
			if (index > 93) {
				std::cout << "No Character Found\n";
				return;
			}
			
		}
		
	}
	

}

std::vector<Characters*> Teams::GetTeamComp()
{
	return TeamComp;
}
