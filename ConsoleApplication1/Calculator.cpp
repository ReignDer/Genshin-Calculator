#include "Calculator.h"

float Calculator::CalcATK()
{
	return (AttackCharacter + AttackWeapon) * (1 + AttackBonus) + FlatAttack;
}

float Calculator::CalcBaseDMG()
{
	return TalentPercent * CalcATK();
}

float Calculator::CalcWithCRIT()
{
	return 1 + CritDMG;
}
float Calculator::CalcWithoutCRIT()
{
	return 1;
}

float Calculator::CalcEnemyDefMult()
{
	return (CharacterLevel + 100.f) / ((CharacterLevel + 100.f) + (EnemyLevel + 100.f) * (1.f - DefReduction) * (1.f - DefIgnore));
}

float Calculator::CalcEnemyResMult()
{
	Resistance = CalcResistance();
	if (Resistance < 0.f)
		return 1.f - (Resistance / 2.f);
	else if (Resistance >= 0.f && Resistance < 0.75f)
		return 1.f - Resistance;
	else if (Resistance >= 0.75f)
		return 1.f / (4.f * Resistance + 1.f);
	else
		return 1;

}

float Calculator::CalcResistance()
{
	return BaseResistance - ResistanceReduction;
}

float Calculator::CalcAmplifyingReaction()
{
	if (ReactionMultiplier == 0)
		return 1;
	else
		return ReactionMultiplier * (1 + ((2.78 * EM) / (1400 + EM)) + ReactionBonus);
}

float Calculator::CalcAdditiveReaction()
{
	if (ReactionMultiplier == 0)
		return 0;
	else
		return ReactionMultiplier * LevelMultiplier * (1 + ((5 * EM) / (1200 + EM)) + ReactionBonus);
}

void Calculator::CalcRawDMG()
{
	BaseDMG = CalcBaseDMG();
	std::cout << BaseDMG << "\n";
	AdditiveBaseDMGBonus = CalcAdditiveReaction();
	std::cout << AdditiveBaseDMGBonus << "\n";
	CRIT = CalcWithCRIT();
	std::cout << CRIT << "\n";
	EnemyDefMult = CalcEnemyDefMult();
	std::cout << EnemyDefMult << "\n";
	EnemyResMult = CalcEnemyResMult();
	std::cout << EnemyResMult << "\n";
	AmplifyingReaction = CalcAmplifyingReaction();
	std::cout << AmplifyingReaction << "\n";

	DMGwithCrit = ((BaseDMG * BaseDMGMult) + AdditiveBaseDMGBonus) * (1 + DMGBonus - DMGReductionTarget) * CRIT
		* EnemyDefMult * EnemyResMult * AmplifyingReaction;

	CRIT = CalcWithoutCRIT();
	DMGwithoutCrit = ((BaseDMG * BaseDMGMult) + AdditiveBaseDMGBonus) * (1 + DMGBonus - DMGReductionTarget) * CRIT
		* EnemyDefMult * EnemyResMult * AmplifyingReaction;
}

float Calculator::getRawDMGwithCrit()
{
	return DMGwithCrit;
}

float Calculator::getRawDMGwithoutCrit()
{
	return DMGwithoutCrit;
}


Calculator* Calculator::instance = NULL;

Calculator::Calculator(){}
Calculator::Calculator(const Calculator&){}
Calculator* Calculator::getInstance()
{
	if (instance == NULL)
		instance = new Calculator();
	else
		return instance;
}

void Calculator::Init(float AttackCharacter, float AttackWeapon, float AttackBonus, float FlatAttack, float DMGBonus,
	float CritDMG, float TalentPercent, float DefReduction, float DefIgnore, float DMGReductionTarget, float EnemyLevel,
	float BaseResistance, float ResistanceReduction, float ReactionBonus, float BaseDMGMult, float LevelMultiplier,
	float CharacterLevel, float EM, float ReactionnMultiplier = 0.f)
{
	this->AttackCharacter = AttackCharacter;
	this->AttackWeapon = AttackWeapon;
	this->AttackBonus = AttackBonus;
	this->FlatAttack = FlatAttack;
	this->DMGBonus = DMGBonus;
	this->CritDMG = CritDMG;
	this->TalentPercent = TalentPercent;
	this->DefReduction = DefReduction;
	this->DefIgnore = DefIgnore;
	this->DMGReductionTarget = DMGReductionTarget;
	this->EnemyLevel = EnemyLevel;
	this->BaseResistance = BaseResistance;
	this->ResistanceReduction = ResistanceReduction;
	this->ReactionBonus = ReactionBonus;
	this->BaseDMGMult = BaseDMGMult;
	this->LevelMultiplier = LevelMultiplier;
	this->CharacterLevel = CharacterLevel;
	this->EM = EM;
	this->ReactionMultiplier = ReactionnMultiplier;
}




