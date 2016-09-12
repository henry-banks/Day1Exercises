#pragma once
#include "Zombie.h"
#include <vector>

class GameState
{
	std::vector<Zombie> zombies;
	Zombie winner;
	//Number of zombies
	const int Z_NUM = 6;

	//Holds round number
	int roundAcc;

public:
	GameState();
	~GameState();

	void Update();
	void DrawStatus(bool isBrief) const;
	void DrawRound() const;
	bool isGameOver() const;

	void setWinner();
	Zombie getWinner() const;
};

