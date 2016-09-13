#pragma once
#include <string>

enum class EEntityState //I know better than to use a default enum.
{
	DEFENSE,
	OFFENSE,
	DEAD,
};

class Entity
{
	std::string name;
	int health, maxHealth;
	int attack, maxAttack;
	int defense, maxDefense;

	int critical;

	//When to enter defense state
	int threshold;
	EEntityState state;

	

public:
	Entity();
	~Entity();

	void init(std::string inName, int inThresh);
	void tick(Entity &e);

	EEntityState offense(Entity &e);
	EEntityState defend();

	void TakeDamage(int inDmg, bool isCrit);
	
	bool isAlive();

	void printEntitiy();
};

