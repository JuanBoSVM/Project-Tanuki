#pragma once
#include <string>
#include "Skill.h"

using namespace std;

class Character{

private:
	string name;
	int currentHealth, maxHealth, stamina, strength, speed, defence, evasion, accuracy, crit;
	Skill* skillOne;
	Skill* skillTwo;
	Skill* skillThree;

public:
	//Constructor and Destructor
	Character(Skill* skillOne, Skill* skillTwo, Skill* skillThree);
	~Character();
	//Setters
	void setName(string name);
	void setCurrentHealth(int currentHealth);
	void serMaxHealth(int maxHealth);
	void setStamina(int stamina);
	void setStrength(int strength);
	void setSpeed(int speed);
	void setDefence(int defence);
	void setEvasion(int evasion);
	void setAccuracy(int accuracy);
	void setCrit(int crit);
	//Getters
	string getName();
	int getCurrentHealth();
	int serMaxHealth();
	int getStamina();
	int getStrength();
	int getSpeed();
	int getDefence();
	int getEvasion();
	int getAccuracy();
	int getCrit();
};