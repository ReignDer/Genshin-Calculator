#include "WeaponDatabase.h"

WeaponDatabase::WeaponDatabase()
{
	//POLEARMS
	polearmWeapons.emplace_back("Calamity Queller");
	polearmWeapons.emplace_back("Crimson Moon's Semblance");
	polearmWeapons.emplace_back("Engulfing Lightning");
	polearmWeapons.emplace_back("Primordial Jade Spear");
	polearmWeapons.emplace_back("Skyward Spine");
	polearmWeapons.emplace_back("Staff of Homa");
	polearmWeapons.emplace_back("Staff of the Scarlet Sands");
	polearmWeapons.emplace_back("Vortex Vanquisher");
	polearmWeapons.emplace_back("Ballad of the Fjords");
	polearmWeapons.emplace_back("Blackcliff Pole");
	polearmWeapons.emplace_back("Crescent Pike");
	polearmWeapons.emplace_back("Deathmatch");
	polearmWeapons.emplace_back("Dialogues of the Desert Sages");
	polearmWeapons.emplace_back("Dragon's Bane");
	polearmWeapons.emplace_back("Dragonspine Spear");
	polearmWeapons.emplace_back("Favonius Lance");
	polearmWeapons.emplace_back("Foot­print of the Rain­bow");
	polearmWeapons.emplace_back("Kitain Cross Spear");
	polearmWeapons.emplace_back("Lithic Spear");
	polearmWeapons.emplace_back("Missive Windspear");
	polearmWeapons.emplace_back("Moonpiercer");
	polearmWeapons.emplace_back("Mountain-Bracing Bolt");
	polearmWeapons.emplace_back("Prospector's Drill");
	polearmWeapons.emplace_back("Prototype Starglitter");
	polearmWeapons.emplace_back("Rightful Reward");
	polearmWeapons.emplace_back("Royal Spear");
	polearmWeapons.emplace_back("The Catch");
	polearmWeapons.emplace_back("Wavebreaker's Fin");
	polearmWeapons.emplace_back("Black Tassel");
	polearmWeapons.emplace_back("Halberd");
	polearmWeapons.emplace_back("White Tassel");

	weaponDatabase[Eweapon::EWeapon::POLEARM] = polearmWeapons;

	//CLAYMORE
	claymoreWeapons.emplace_back("Beacon of the Reed Sea");
	claymoreWeapons.emplace_back("Fang of the Mountain King");
	claymoreWeapons.emplace_back("Redhorn Stonethresher");
	claymoreWeapons.emplace_back("Skyward Pride");
	claymoreWeapons.emplace_back("Song of Broken Pines");
	claymoreWeapons.emplace_back("The Unforged");
	claymoreWeapons.emplace_back("Verdict");
	claymoreWeapons.emplace_back("Wolf's Gravestone");
	claymoreWeapons.emplace_back("Akuoumaru");
	claymoreWeapons.emplace_back("Blackcliff Slasher");
	claymoreWeapons.emplace_back("Earth Shaker");
	claymoreWeapons.emplace_back("Favonius Greatsword");
	claymoreWeapons.emplace_back("Forest Regalia");
	claymoreWeapons.emplace_back("Fruitful Hook");
	claymoreWeapons.emplace_back("Katsuragikiri Nagamasa");
	claymoreWeapons.emplace_back("Lithic Blade");
	claymoreWeapons.emplace_back("Luxurious Sea-Lord");
	claymoreWeapons.emplace_back("Mailed Flower");
	claymoreWeapons.emplace_back("Makhaira Aquamarine");
	claymoreWeapons.emplace_back("Portable Power Saw");
	claymoreWeapons.emplace_back("Prototype Archaic");
	claymoreWeapons.emplace_back("Rainslasher");
	claymoreWeapons.emplace_back("Royal Greatsword");
	claymoreWeapons.emplace_back("Sacrificial Greatsword");
	claymoreWeapons.emplace_back("Serpent Spine");
	claymoreWeapons.emplace_back("Snow-Tombed Starsilver");
	claymoreWeapons.emplace_back("Talking Stick");
	claymoreWeapons.emplace_back("The Bell");
	claymoreWeapons.emplace_back("Tidal Shadow");
	claymoreWeapons.emplace_back("Ultimate Overlord's Mega Magic Sword");
	claymoreWeapons.emplace_back("WhiteblindWhiteblind");
	claymoreWeapons.emplace_back("Bloodtainted Greatsword");
	claymoreWeapons.emplace_back("Debate Club");
	claymoreWeapons.emplace_back("Ferrous Shadow");
	claymoreWeapons.emplace_back("Skyrider Greatsword");
	claymoreWeapons.emplace_back("White Iron Greatsword");
	claymoreWeapons.emplace_back("White Iron Greatsword");

	weaponDatabase[Eweapon::EWeapon::CLAYMORE] = claymoreWeapons;

	//BOW
	bowWeapons.emplace_back("Amos' Bow");
	bowWeapons.emplace_back("Aqua Simulacra");
	bowWeapons.emplace_back("Elegy for the End");
	bowWeapons.emplace_back("Hunter's Path");
	bowWeapons.emplace_back("Polar Star");
	bowWeapons.emplace_back("Silvershower Heartstrings");
	bowWeapons.emplace_back("Skyward Harp");
	bowWeapons.emplace_back("The First Great Magic");
	bowWeapons.emplace_back("Thundering Pulse");
	bowWeapons.emplace_back("Alley Hunter");
	bowWeapons.emplace_back("Blackcliff Warbow");
	bowWeapons.emplace_back("Chain Breaker");
	bowWeapons.emplace_back("Cloudforged");
	bowWeapons.emplace_back("Compound Bow");
	bowWeapons.emplace_back("End of the Line");
	bowWeapons.emplace_back("Fading Twilight");
	bowWeapons.emplace_back("Favonius Warbow");
	bowWeapons.emplace_back("Hamayumi");
	bowWeapons.emplace_back("King's Squire");
	bowWeapons.emplace_back("Mitternachts Waltz");
	bowWeapons.emplace_back("Mouun's Moon");
	bowWeapons.emplace_back("Predator");
	bowWeapons.emplace_back("Prototype Crescent");
	bowWeapons.emplace_back("Range Gauge");
	bowWeapons.emplace_back("Royal Bow");
	bowWeapons.emplace_back("Rust");
	bowWeapons.emplace_back("Sacrificial Bow");
	bowWeapons.emplace_back("Scion of the Blazing Sun");
	bowWeapons.emplace_back("Song of Stillness");
	bowWeapons.emplace_back("The Stringless");
	bowWeapons.emplace_back("The Viridescent Hunt");
	bowWeapons.emplace_back("Windblume Ode");
	bowWeapons.emplace_back("Messenger");
	bowWeapons.emplace_back("Raven Bow");
	bowWeapons.emplace_back("Recurve Bow");
	bowWeapons.emplace_back("Sharpshooter's Oath");
	bowWeapons.emplace_back("Slingshot");

	weaponDatabase[Eweapon::EWeapon::BOW] = bowWeapons;

	//SWORDS
	swordWeapons.emplace_back("Absolution");
	swordWeapons.emplace_back("Aquila Favonia");
	swordWeapons.emplace_back("Freedom-Sworn");
	swordWeapons.emplace_back("Haran Geppaku Futsu");
	swordWeapons.emplace_back("Key of Khaj-Nisut");
	swordWeapons.emplace_back("Light of Foliar Incision");
	swordWeapons.emplace_back("Mistsplitter Reforged");
	swordWeapons.emplace_back("Peak Patrol Song");
	swordWeapons.emplace_back("Primordial Jade Cutter");
	swordWeapons.emplace_back("Skyward Blade");
	swordWeapons.emplace_back("Splendor of Tranquil Waters");
	swordWeapons.emplace_back("Summit Shaper");
	swordWeapons.emplace_back("Uraku Misugiri");
	swordWeapons.emplace_back("Amenoma Kageuchi");
	swordWeapons.emplace_back("lackcliff Longsword");
	swordWeapons.emplace_back("Cinnabar Spindle");
	swordWeapons.emplace_back("Favonius Sword");
	swordWeapons.emplace_back("Festering Desire");
	swordWeapons.emplace_back("Finale of the Deep");
	swordWeapons.emplace_back("Fleuve Cendre Ferryman");
	swordWeapons.emplace_back("Flute of Ezpitzal");
	swordWeapons.emplace_back("Iron Sting");
	swordWeapons.emplace_back("Kagotsurube Isshin");
	swordWeapons.emplace_back("Lion's Roar");
	swordWeapons.emplace_back("Prototype Rancour");
	swordWeapons.emplace_back("Royal Longsword");
	swordWeapons.emplace_back("Sacrificial Sword");
	swordWeapons.emplace_back("Sapwood Blade");
	swordWeapons.emplace_back("Sturdy Bone");
	swordWeapons.emplace_back("Sword of Descension");
	swordWeapons.emplace_back("Sword of Narzissenkreuz");
	swordWeapons.emplace_back("The Alley Flash");
	swordWeapons.emplace_back("The Black Sword");
	swordWeapons.emplace_back("The Dockhand's Assistant");
	swordWeapons.emplace_back("The Flute");
	swordWeapons.emplace_back("Toukabou Shigure");
	swordWeapons.emplace_back("Wolf-Fang");
	swordWeapons.emplace_back("Xiphos' Moonlight");
	swordWeapons.emplace_back("Cool Steel");
	swordWeapons.emplace_back("Dark Iron Sword");
	swordWeapons.emplace_back("Fillet Blade");
	swordWeapons.emplace_back("Harbinger of Dawn");
	swordWeapons.emplace_back("Skyrider Sword");
	swordWeapons.emplace_back("Traveler's Handy Sword");

	weaponDatabase[Eweapon::EWeapon::SWORD] = swordWeapons;

	//CATALYST
	catalystWeapons.emplace_back("A Thousand Floating Dreams");
	catalystWeapons.emplace_back("Cashflow Supervision");
	catalystWeapons.emplace_back("Crane's Echoing Call");
	catalystWeapons.emplace_back("Everlasting Moonglow");
	catalystWeapons.emplace_back("Jadefall's Splendor");
	catalystWeapons.emplace_back("Kagura's Verity");
	catalystWeapons.emplace_back("Lost Prayer to the Sacred Winds");
	catalystWeapons.emplace_back("Memory of Dust");
	catalystWeapons.emplace_back("Skyward Atlas");
	catalystWeapons.emplace_back("Surf's Up");
	catalystWeapons.emplace_back("Tome of the Eternal Flow");
	catalystWeapons.emplace_back("Tulaytullah's Remembrance");
	catalystWeapons.emplace_back("Ash-Graven Drinking Horn");
	catalystWeapons.emplace_back("Ballad of the Boundless Blue");
	catalystWeapons.emplace_back("Blackcliff Agate");
	catalystWeapons.emplace_back("Dodoco Tales");
	catalystWeapons.emplace_back("Eye of Perception");
	catalystWeapons.emplace_back("Favonius Codex");
	catalystWeapons.emplace_back("Flowing Purity");
	catalystWeapons.emplace_back("Frostbearer");
	catalystWeapons.emplace_back("Fruit of Fulfillment");
	catalystWeapons.emplace_back("Hakushin Ring");
	catalystWeapons.emplace_back("Mappa Mare");
	catalystWeapons.emplace_back("Oathsworn Eye");
	catalystWeapons.emplace_back("Prototype Amber");
	catalystWeapons.emplace_back("Ring of Yaxche");
	catalystWeapons.emplace_back("Royal Grimoire");
	catalystWeapons.emplace_back("Sacrificial Fragments");
	catalystWeapons.emplace_back("Sacrificial Jade");
	catalystWeapons.emplace_back("Sacrificial Jade");
	catalystWeapons.emplace_back("The Widsith");
	catalystWeapons.emplace_back("Wandering Evenstar");
	catalystWeapons.emplace_back("Wine and Song");
	catalystWeapons.emplace_back("Emerald Orb");
	catalystWeapons.emplace_back("Magic Guide");
	catalystWeapons.emplace_back("Otherworldly Story");
	catalystWeapons.emplace_back("Thrilling Tales of Dragon Slayers");
	catalystWeapons.emplace_back("Twin Nephrite");

	weaponDatabase[Eweapon::EWeapon::CATALYST] = catalystWeapons;
}

WeaponDatabase* WeaponDatabase::instance = NULL;
WeaponDatabase::WeaponDatabase(const WeaponDatabase&) {}

WeaponDatabase* WeaponDatabase::getInstance() {
	if (instance == NULL)
		instance = new WeaponDatabase();

	return instance;
}

std::unordered_map<Eweapon::EWeapon, std::vector<std::string>> WeaponDatabase::GetDatabase()
{
	return weaponDatabase;
}

void WeaponDatabase::printDatabase()
{
	int index = 0;
	for (auto i = weaponDatabase.begin(); i != weaponDatabase.end(); i++) {
		switch (i->first)
		{
		case Eweapon::EWeapon::SWORD:
			std::cout << "SWORD\n";
			break;
		case Eweapon::EWeapon::CLAYMORE:
			std::cout << "CLAYMORE\n";
			break;
		case Eweapon::EWeapon::CATALYST:
			std::cout << "CATALYST\n";
			break;
		case Eweapon::EWeapon::POLEARM:
			std::cout << "POLEARM\n";
			break;
		case Eweapon::EWeapon::BOW:
			std::cout << "BOW\n";
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
