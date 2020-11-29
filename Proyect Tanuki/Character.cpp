#include "Character.h"

//Constructor and Destructor
Character::Character(Skill* skillOne, Skill* skillTwo, Skill* skillThree) {
	this->name = "Default Character";
	this->currentHealth = 15;
	this->maxHealth = 15;
	this->stamina = 100;
	this->strength = 5;
	this->speed = 5;
	this->defence = 5;
	this->evasion = 5;
	this->accuracy = 1;
	this->crit = 1;
	this->skillOne = skillOne;
	this->skillTwo = skillTwo;
	this->skillThree = skillThree;
}
Character::~Character() {

}


//Setters
void Character::setName(string name) {
	this->name = name;
}
void Character::setCurrentHealth(int currentHealth) {
	this->currentHealth = currentHealth;
}
void Character::serMaxHealth(int maxHealth) {
	this->maxHealth = maxHealth;
}
void Character::setStamina(int stamina) {
	this->stamina = stamina;
}
void Character::setStrength(int strength) {
	this->strength = strength;
}
void Character::setSpeed(int speed) {
	this->speed = speed;
}
void Character::setDefence(int defence) {
	this->defence = defence;
}
void Character::setEvasion(int evasion) {
	this->evasion = evasion;
}
void Character::setAccuracy(int accuracy) {
	this->accuracy = accuracy;
}
void Character::setCrit(int crit) {
	this->crit = crit;
}


//Getters
string Character::getName() {
	return this->name;
}
int Character::getCurrentHealth() {
	return this->currentHealth;
}
int Character::serMaxHealth() {
	return this->maxHealth;
}
int Character::getStamina() {
	return this->stamina;
}
int Character::getStrength() {
	return this->strength;
}
int Character::getSpeed() {
	return this->speed;
}
int Character::getDefence() {
	return this->defence;
}
int Character::getEvasion() {
	return this->evasion;
}
int Character::getAccuracy() {
	return this->accuracy;
}
int Character::getCrit() {
	return this->crit;
}