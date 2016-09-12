#include "Zombie.h"
#include <iostream>
#include <cstdlib>

//RANDRANGE
int randRange(int min, int max) { return rand() % (max - min) + min; }

Zombie::Zombie()
{
}


Zombie::~Zombie()
{
}

void Zombie::init(std::string inName, std::string occ)
{
	name = inName;
	occupation = occ;

	health = randRange(90, 150);
	attack = randRange(10, 25);
	critRate = randRange(5, 25);
	kills = 0;
}

void Zombie::printZombie(bool isBrief) const
{
	//Using strings, no printf (I like cout better anyway)
	std::cout << name << ", " << occupation << std::endl;
	if (!isBrief) {
		printf("\tHealth: %d\n\tAttack: %d\n", health, attack);
	}
	
}

int Zombie::rollAttack() const { return attack; }

void Zombie::takeDamage(int dmg) { health -= dmg; }

bool Zombie::getIsAlive() const { return health > 0; }

std::vector<Zombie> addZombies()
{
	std::vector<Zombie> zombies;

	zombies.push_back(Zombie());
	zombies[0].init("Jorgs", "Water Bottler");

	zombies.push_back(Zombie());
	zombies[1].init("Albot", "Rock Thrower");

	zombies.push_back(Zombie());
	zombies[2].init("Mischella", "Wire Sorter");

	zombies.push_back(Zombie());
	zombies[3].init("Mi", "Pipe Adjuster");

	zombies.push_back(Zombie());
	zombies[4].init("Yu", "Gravel Dispenser");

	zombies.push_back(Zombie());
	zombies[5].init("Balgruuf", "Jarl of Whiterun");

	zombies.push_back(Zombie());
	zombies[6].init("Jim", "Accountant");

	return zombies;
}