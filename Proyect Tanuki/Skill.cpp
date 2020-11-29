#include "Skill.h"


//Constructor and Destructor
Skill::Skill() {
	this->name = "Default Skill";
	this->multiplier = 10;
	this->target = 1;
	this->staminaCost = 20;
	this->duration = 0;
}
Skill::~Skill() {
}


//Setters
void Skill::setName(string name) {
	this->name = name;
}
void Skill::setMultiplier(int multiplier) {
	this->multiplier = multiplier;
}
void Skill::setTarget(int target) {
	this->target = target;
}
void Skill::setStaminaCost(int staminaCost) {
	this->staminaCost = staminaCost;
}
void Skill::setDuration(int duration) {
	this->duration = duration;
}


//Getters
string Skill::getName() {
	return this->name;
}
int Skill::getMultiplier() {
	return this->multiplier;
}
int Skill::getTarget() {
	return this->target;
}
int Skill::getStaminaCost() {
	return this->staminaCost;
}
int Skill::getDuration() {
	return this->duration;
}