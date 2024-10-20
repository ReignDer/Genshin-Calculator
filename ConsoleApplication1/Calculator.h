#pragma once
#include <iostream>
class Calculator
{
public:
	static Calculator* getInstance();

	void Init(float AttackCharacter,
				float AttackWeapon,
				float AttackBonus,
				float FlatAttack,
				float DMGBonus,
				float CritDMG,
				float TalentPercent,
				float DefReduction,
				float DefIgnore,
				float DMGReductionTarget,
				float EnemyLevel,
				float BaseResistance,
				float ResistanceReduction,
				float ReactionBonus,
				float BaseDMGMult,
				float LevelMultiplier,
				float CharacterLevel,
				float EM,
				float ReactionMultiplier
			);
	void CalcRawDMG();

	float getRawDMGwithCrit();
	float getRawDMGwithoutCrit();
private:
	float CalcATK();
	float CalcBaseDMG();
	float CalcWithCRIT();
	float CalcWithoutCRIT();
	float CalcEnemyDefMult();
	float CalcEnemyResMult();
	float CalcResistance();
	float CalcBaseDMGMult();
	float CalcAmplifyingReaction();
	float CalcAdditiveReaction();

	

private:
	//NEEDS TO BE FILLED MANUALLY
	float AttackCharacter;
	float AttackWeapon;
	float AttackBonus;
	float FlatAttack;
	float DMGBonus;
	float CritDMG;
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
	float CharacterLevel;
	float EM;
	float ReactionMultiplier;

	//RESULTS
	float DMGwithCrit;
	float DMGwithoutCrit;
	float BaseDMG;
	float CRIT;
	float EnemyDefMult;
	float EnemyResMult;
	float Resistance;
	float AmplifyingReaction;
	float AdditiveBaseDMGBonus;
	float AdditiveReaction;
	

private:
	static Calculator* instance;
	Calculator();
	Calculator(const Calculator&);
	Calculator& operator = (const Calculator&);
};

