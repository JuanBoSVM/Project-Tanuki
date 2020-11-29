#pragma once
#include <string>

using namespace std;

class Skill {

private:
	string name;
	int multiplier, target, staminaCost, duration;

public:
	//Constructor and Destructor
	Skill();
	~Skill();
	//Setters
	void setName(string name);
	void setMultiplier(int multiplier);
	void setTarget(int target);
	void setStaminaCost(int staminaCost);
	void setDuration(int duration);
	//Getters
	string getName();
	int getMultiplier();
	int getTarget();
	int getStaminaCost();
	int getDuration();
};