#include "Entity.h"
#include <cstdlib>
#include <iostream>


void Entity::TakeDamage(int inDmg, bool isCrit)
{
	int reduction = (inDmg * 2) / 3;

	if (defense > reduction && !isCrit)
	{
		defense -= reduction;
		inDmg -= reduction;
	}
	if (isCrit)
	{
		attack -= rand() % 10 + 5;
	}

	health -= inDmg;
}

Entity::Entity()
{
}


Entity::~Entity()
{
}

void Entity::init(std::string inName, int inThresh)
{
	name = inName;
	threshold = inThresh;

	health = maxHealth = rand() % 120 + 120; //120 - 240
	attack = maxAttack = rand() % 20 + 20; //20 - 40
	defense = maxDefense = rand() % 60 + 60; //60 - 120

	critical = rand() % 3 + 2;

	threshold = rand() % health; //0 - 220

	state = EEntityState::OFFENSE;
}

void Entity::tick(Entity & e)
{
	switch (state)
	{
	case EEntityState::DEFENSE:
		state = defend(); break;
	case EEntityState::OFFENSE:
		state = offense(e); break;
	case EEntityState::DEAD:
		break;
	default:
		break;
	}
}

EEntityState Entity::offense(Entity & e)
{
	//Set critical hit and damage
	bool crit = rand() % critical == 0;
	int dmg = rand() % attack + attack; //Actual damage is 0-20 greater than attack

	e.TakeDamage(dmg, crit);
	//Transition
	if (health < threshold) {
		return EEntityState::DEFENSE;
	}
	else if (health < 0) {
		return EEntityState::DEAD;
	}
	else{
		return EEntityState::OFFENSE;
	}
}

EEntityState Entity::defend()
{
	//Recover
	health += 5 + rand() % 30;

	attack += 5 + rand() % 5;
	defense += 5 + rand() % 5;

	//Restrict stats to limits
	if (health > maxHealth) { health = maxHealth; }
	if (attack > maxAttack) { attack = maxAttack; }
	if (defense > maxDefense) { defense = maxDefense; }
	//Transition
	if (health > threshold) {
		return EEntityState::OFFENSE;
	}
	else if (health < 0) {
		return EEntityState::DEAD;
	}
	else {
		return EEntityState::DEFENSE;
	}
}

bool Entity::isAlive()
{
	return health > 0;
}

void Entity::printEntitiy()
{
	switch (state)
	{
	case EEntityState::DEFENSE:
		std::cout << name;
		printf(", %d, is defending!\n", health);
		break;
	case EEntityState::OFFENSE:
		std::cout << name;
		printf(", %d, is attacking!\n", health);
		break;
	case EEntityState::DEAD:
		std::cout << name;
		printf(", %d, is dead!\n", health);
		break;
	default:
		break;
	}
}
