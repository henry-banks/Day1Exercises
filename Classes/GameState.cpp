#include "GameState.h"



GameState::GameState()
{
	zombies = addZombies();
	roundAcc = 0;
}


GameState::~GameState()
{
}

void GameState::Update()
{
	roundAcc++;
	for (int i = 0; i < Z_NUM; i++)
	{
		if (zombies[i].getIsAlive()) {
			zombies[rand() % Z_NUM].takeDamage(zombies[i].rollAttack());
		}
	}
}

void GameState::DrawStatus(bool isBrief) const
{
	for (int i = 0; i < Z_NUM; i++) {
		zombies[i].printZombie(isBrief);
	}
}

void GameState::DrawRound() const
{
	printf("\nROUND %d\n", roundAcc);
	printf("==============================\n");
	for (int i = 0; i < Z_NUM; i++) {
		zombies[i].printZombie(false);
	}
}

bool GameState::isGameOver() const
{
	int livingZombies = 0;
	bool gameOver = false;

	for (int i = 0; i < Z_NUM; i++) {
		if (zombies[i].getIsAlive()) {
			livingZombies++;
		}
	}

	if (livingZombies <= 1) {
		gameOver = true;
	}
	return gameOver;
}

void GameState::setWinner()
{
	for (int i = 0; i < Z_NUM; i++)
	{
		if (zombies[i].getIsAlive()) {
			winner = zombies[i];
		}
	}
}

Zombie GameState::getWinner() const
{
	return winner;
}
