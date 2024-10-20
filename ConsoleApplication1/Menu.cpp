#include "Menu.h"

Menu::Menu() : is_Running(true)
{
    teams = new Teams();
}

Menu::~Menu()
{
}

void Menu::Run() {
    StartMenu();
    
}

void Menu::CreateTeams()
{

    int choice;

    std::cout << "[1] Add Characters to Team\n";
    std::cout << "[2] Add Weapon to Characters\n";
    std::cout << "[3] Add Artifacts to Characters\n";
    std::cout << "[4] See Team Details\n";
    std::cout << "[5] Exit\n";

    std::cout << "> ";
    std::cin >> choice;
    switch (choice) {
    case 1:
        AddCharacters();
        break;
    case 2:
        AddWeapon();
        break;
    case 3:
        AddArtifacts();
        break;
    case 4:
        TeamDetails();
        break;
    case 5:
        StartMenu();
        break;
    default:
        CreateTeams();
        break;
    }

}

void Menu::AddCharacters()
{
    char choice;
    do {
        teams->addCharacters();
        for (int i = 0; i < teams->GetTeamComp().size(); i++) {
            std::cout << "\n" << teams->GetTeamComp()[i]->GetName() << "\n";
            std::cout << "Level: " << teams->GetTeamComp()[i]->getLVL() << "\n";
            std::cout << "Base ATK: " << teams->GetTeamComp()[i]->getBaseAtk() << "\n";
            std::cout << "EM: " <<teams->GetTeamComp()[i]->getEM() << "\n";
            std::cout << "Crit DMG: " << teams->GetTeamComp()[i]->getCD() << "\n";
        }
        std::cout << "\nContinue Adding Characters to the Team? Y/N\n";
        std::cout << "> ";
        std::cin >> choice;
    } while (choice != 'N' && choice != 'n');

    CreateTeams();
}

void Menu::AddWeapon()
{
    int choice;
    if (teams->GetTeamComp().size() == 0) {
        std::cout << "Add Character First\n";
        CreateTeams();
    }

    std::cout << "Pick a Character To Add Weapon\n";
    for (int i = 0; i < teams->GetTeamComp().size(); i++) {
        std::cout << "["<<i + 1<<"] " << teams->GetTeamComp()[i]->GetName() << "\n";
    }
    std::cout << "> ";
    std::cin >> choice;
    int index = -1;
    for (int i = 0; i < teams->GetTeamComp().size() && index != i; i++) {
        if ((choice - 1) == i) {
            index = i;
        }
            
    }
   
    if (index != -1) {
        switch (choice) {
        case 1:
            PickWeapon(index);
            std::cout<<"\nWeapon Name: "<< teams->GetTeamComp()[index]->getWeapon()->getName() << "\n";
            std::cout << "Weapon Base ATK: " << teams->GetTeamComp()[index]->getWeapon()->getBaseATK() << "\n\n";
            break;
        case 2:
            PickWeapon(index);
            std::cout << "\nWeapon Name: " << teams->GetTeamComp()[index]->getWeapon()->getName() << "\n";
            std::cout << "Weapon Base ATK: " << teams->GetTeamComp()[index]->getWeapon()->getBaseATK() << "\n\n";
            break;
        case 3:
            PickWeapon(index);
            std::cout << "\nWeapon Name: " << teams->GetTeamComp()[index]->getWeapon()->getName() << "\n";
            std::cout << "Weapon Base ATK: " << teams->GetTeamComp()[index]->getWeapon()->getBaseATK() << "\n\n";
            break;
        case 4:
            PickWeapon(index);
            std::cout << "\nWeapon Name: " << teams->GetTeamComp()[index]->getWeapon()->getName() << "\n";
            std::cout << "Weapon Base ATK: " << teams->GetTeamComp()[index]->getWeapon()->getBaseATK() << "\n\n";
            break;
        default:
            break;
        }
    }
    else
        CreateTeams();

    CreateTeams();
}

void Menu::AddArtifacts()
{
}

void Menu::TeamDetails()
{
    for (int i = 0; i < teams->GetTeamComp().size(); i++) {
        std::cout << "\n" << teams->GetTeamComp()[i]->GetName() << "\n";
        std::cout << "Level: " << teams->GetTeamComp()[i]->getLVL() << "\n";
        std::cout << "Base ATK: " << teams->GetTeamComp()[i]->getBaseAtk() << "\n";
        std::cout << "EM: " << teams->GetTeamComp()[i]->getEM() << "\n";
        std::cout << "Crit DMG: " << teams->GetTeamComp()[i]->getCD() << "\n";
        std::cout << "Weapon Name: " << teams->GetTeamComp()[i]->getWeapon()->getName() << "\n";
        std::cout << "Weapon Base ATK: " << teams->GetTeamComp()[i]->getWeapon()->getBaseATK() << "\n\n";
    }

    CreateTeams();


}

void Menu::CalcDmg()
{
    int index;
    std::cout << "Select Character to Calculate DMG\n";
    for (int i = 0; i < teams->GetTeamComp().size(); i++) {
        std::cout << "[" << i + 1 << "] " << teams->GetTeamComp()[i]->GetName() << "\n";
    }
    std::cout << "> ";
    std::cin >> index;
    char BaseDMGMultchoice;
    float AttackBonus;
    float FlatAttack;
    float DMGBonus;
    float TalentPercent;
    float DefReduction;
    float DefIgnore;
    float DMGReductionTarget;
    float EnemyLevel;
    float BaseResistance;
    float ResistanceReduction;
    float ReactionBonus;
    float BaseDMGMult;
    float LevelMultiplier;
    float ReactionMultiplier;

    std::cout << "Enter the Sum of All Attack %\n";
    std::cout << "> ";
    std::cin >> AttackBonus;
    std::cout << "Enter the Sum of All Flat Attack\n";
    std::cout << "> ";
    std::cin >> FlatAttack;
    std::cout << "Enter the Sum of All DMG Bonus(e.g goblets,weapon effect, artifact effect, constellations)\n";
    std::cout << "> ";
    std::cin >> DMGBonus;
    std::cout << "Enter the Talent%\n";
    std::cout << "> ";
    std::cin >> TalentPercent;
    std::cout << "Enter the Defense Reduction(Enter 0 if none)(Only obtained certain constellations and Lisa A4 talent)\n";
    std::cout << "> ";
    std::cin >> DefReduction;
    std::cout << "Enter the Defense Ignore(Enter 0 if none)(Only obtained certain constellations)\n";
    std::cout << "> ";
    std::cin >> DefIgnore;
    std::cout << "Enter the DMG Reduction Target(Enter 0 if none)(Honestly have no idea what this is)\n";
    std::cout << "> ";
    std::cin >> DMGReductionTarget;
    std::cout << "Enter Enemy Level\n";
    std::cout << "> ";
    std::cin >> EnemyLevel;
    std::cout << "Enter the Base Resistance of the Enemy(https://library.keqingmains.com/resources/compendiums/enemy-resistances)\n";
    std::cout << "> ";
    std::cin >> BaseResistance;
    std::cout << "Enter the Resistance Reduction applied(Enter 0 if none)(VV or SC)\n";
    std::cout << "> ";
    std::cin >> ResistanceReduction;
    std::cout << "Enter the Reaction Bonus(Enter 0 if none)(4pc CW or Mona C1)\n";
    std::cout << "> ";
    std::cin >> ReactionBonus;
    std::cout << "Is Base Damage Multiplier Triggered? (World Shaker, Evilsoother, Niwabi, Hanega)\n";
    std::cout << " Y/N\n";
    std::cout << "> ";
    std::cin >> BaseDMGMultchoice;

    if (BaseDMGMultchoice == 'Y' || BaseDMGMultchoice == 'y') {
        int effect;
        std::cout << "Pick triggered effect\n";
        std::cout << "[1] World Shaker\n";
        std::cout << "[2] Evilsoother\n";
        std::cout << "[3] Niwabi\n";
        std::cout << "[4] Hanega\n";
        std::cout << "> ";
        std::cin >> effect;
        switch (effect)
        {
        case 1:
            BaseDMGMult = 2.f;
            break;
        case 2:
            BaseDMGMult = 1.5f;
            break;
        case 3:
            std::cout << "Enter Niwabi Talent% without normal atk multiplier\n";
            std::cout << "> ";
            std::cin >> BaseDMGMult;
            BaseDMGMult /= 100.f;
            break;
        case 4:
            std::cout << "Enter Hanega Talent% without normal atk multiplier\n";
            std::cout << "> ";
            std::cin >> BaseDMGMult;
            BaseDMGMult /= 100.f;
            break;
        default:
            break;
        }
    }
    else
        BaseDMGMult = 1.f;

    std::cout << "Enter the Level Multiplier(Enter 0 if none)(Use only when using Additive reaction)\n";
    std::cout << "> ";
    std::cin >> LevelMultiplier;
    std::cout << "Enter the Reaction Multiplier(Enter 0 if none)(Use only when using Amplifying reaction)\n";
    std::cout << "> ";
    std::cin >> ReactionMultiplier;

    AttackBonus /= 100.f;
    DMGBonus /= 100.f;
    TalentPercent /= 100.f;
    DefReduction /= 100.f;
    DefIgnore /= 100.f;
    DMGReductionTarget /= 100.f;
    BaseResistance /= 100.f;
    ResistanceReduction /= 100.f;
    ReactionBonus /= 100.f;

    switch (index) {
    case 1:
        Calculator::getInstance()->Init(teams->GetTeamComp()[index-1]->getBaseAtk(), 
            teams->GetTeamComp()[index - 1]->getWeapon()->getBaseATK(), AttackBonus, FlatAttack, 
            DMGBonus,teams->GetTeamComp()[index-1]->getCD(), TalentPercent, DefReduction, 
            DefIgnore, DMGReductionTarget, EnemyLevel, BaseResistance, ResistanceReduction, 
            ReactionBonus, BaseDMGMult, LevelMultiplier,
            (float)teams->GetTeamComp()[index-1]->getLVL(),teams->GetTeamComp()[index-1]->getEM(), ReactionMultiplier);
        break;
    case 2:
        Calculator::getInstance()->Init(teams->GetTeamComp()[index - 1]->getBaseAtk(),
            teams->GetTeamComp()[index - 1]->getWeapon()->getBaseATK(), AttackBonus, FlatAttack,
            DMGBonus, teams->GetTeamComp()[index - 1]->getCD(), TalentPercent, DefReduction,
            DefIgnore, DMGReductionTarget, EnemyLevel, BaseResistance, ResistanceReduction,
            ReactionBonus, BaseDMGMult, LevelMultiplier,
            (float)teams->GetTeamComp()[index - 1]->getLVL(), teams->GetTeamComp()[index - 1]->getEM(), ReactionMultiplier);
    case 3:
        Calculator::getInstance()->Init(teams->GetTeamComp()[index - 1]->getBaseAtk(),
            teams->GetTeamComp()[index - 1]->getWeapon()->getBaseATK(), AttackBonus, FlatAttack,
            DMGBonus, teams->GetTeamComp()[index - 1]->getCD(), TalentPercent, DefReduction,
            DefIgnore, DMGReductionTarget, EnemyLevel, BaseResistance, ResistanceReduction,
            ReactionBonus, BaseDMGMult, LevelMultiplier,
            (float)teams->GetTeamComp()[index - 1]->getLVL(), teams->GetTeamComp()[index - 1]->getEM(), ReactionMultiplier);
        break;
    case 4:
        Calculator::getInstance()->Init(teams->GetTeamComp()[index - 1]->getBaseAtk(),
            teams->GetTeamComp()[index - 1]->getWeapon()->getBaseATK(), AttackBonus, FlatAttack,
            DMGBonus, teams->GetTeamComp()[index - 1]->getCD(), TalentPercent, DefReduction,
            DefIgnore, DMGReductionTarget, EnemyLevel, BaseResistance, ResistanceReduction,
            ReactionBonus, BaseDMGMult, LevelMultiplier,
            (float)teams->GetTeamComp()[index - 1]->getLVL(), teams->GetTeamComp()[index - 1]->getEM(), ReactionMultiplier);
        break;
    default:
        CalcDmg();
        break;
    }

    Calculator::getInstance()->CalcRawDMG();

    std::cout << "Raw DMG with Crit: " << Calculator::getInstance()->getRawDMGwithCrit() << "\n";
    std::cout << "Raw DMG without Crit: " << Calculator::getInstance()->getRawDMGwithoutCrit() << "\n";

    StartMenu();

}

void Menu::PickWeapon(int index)
{
    int weaponChoice;
    WeaponDatabase::getInstance()->printDatabase();
    std::cout << "> ";
    std::cin >> weaponChoice;

    int weaponIndex = 1;
    auto database = WeaponDatabase::getInstance()->GetDatabase();

    for (auto i = database.begin(); i != database.end(); i++) {
        for (int j = 0; j < i->second.size(); j++) {
            if (weaponIndex == weaponChoice) {
                int baseAtk;
                std::cout << "Set " << i->second[j] << "'s " << "Base Atttack\n";
                std::cout << "> ";
                std::cin >> baseAtk;


                teams->GetTeamComp()[index]->attachWeapon(new Weapon::Weapon(i->second[j], baseAtk), i->first);
                return;
            }

            weaponIndex++;
            if (weaponIndex > 183) {
                std::cout << "No Weapon Found\n";
                return;
            }

        }

    }
}

void Menu::StartMenu()
{
    std::cout << " ======================\n";
    std::cout << "|                      |\n";
    std::cout << "|GENSHIN DMG CALCULATOR|\n";
    std::cout << "|                      |\n";
    std::cout << " ======================\n";

    std::cout << "\n[1] Create Team\n";
    std::cout << "[2] Calculate DMG\n";

    std::cout << "> ";

    int choice;
    std::cin >> choice;

    switch (choice) {
    case 1:
        CreateTeams();
        break;
    case 2:
        CalcDmg();
        break;
    default:
        std::cout << "Input number\n";

        StartMenu();
        break;

    }
}


