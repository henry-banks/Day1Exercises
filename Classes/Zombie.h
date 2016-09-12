#pragma once
#include <string>
#include <vector>
class Zombie
{
	Zombie* target;

	std::string name, occupation;
	int health, attack, critRate, kills;

public:
	Zombie();
	~Zombie();

	//Initialization function
	void init(std::string name, std::string occ);

	void printZombie(bool isBrief) const;

	int rollAttack() const;
	void takeDamage(int dmg);
	bool getIsAlive() const;
};

std::vector<Zombie> addZombies();