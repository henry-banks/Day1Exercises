#include <iostream>
#include <vector>
#include <ctime>

#include "Zombie.h"
#include "GameState.h"
using namespace std;

void main()
{
	srand(time(0));

	GameState gs;
	
	printf("ZOMBLES:\n");
	gs.DrawStatus(false);

	while (!gs.isGameOver())
	{
		gs.Update();
		gs.DrawRound();
	}

	//vector<Zombie> zombies = addZombies();
	//Zombie winner;

	//const int Z_NUM = 6;

	//printf("ZOMBLES:\n");
	//for (int i = 0; i < Z_NUM; i++){
	//	zombies[i].printZombie(true);
	//}

	////Keeps track of the round number
	//int roundAcc = 0;

	//bool gameOver = false;
	//while (!gameOver)
	//{
	//	roundAcc++;
	//	printf("\nROUND %d\n", roundAcc);
	//	printf("==============================\n");
	//	for (int i = 0; i < Z_NUM; i++)
	//	{
	//		if (zombies[i].getIsAlive()){
	//			zombies[rand() % Z_NUM].takeDamage(zombies[i].rollAttack()); }
	//	}

	//	for (int i = 0; i < Z_NUM; i++){
	//		zombies[i].printZombie(false);
	//	}


	//	int livingZombies = 0;
	//	for (int i = 0; i < Z_NUM; i++){
	//		if (zombies[i].getIsAlive()) {
	//			livingZombies++;
	//		}
	//	}

	//	if (livingZombies <= 1){
	//		gameOver = true;
	//	}
	//}

	//for (int i = 0; i < Z_NUM; i++)
	//{
	//	if (zombies[i].getIsAlive()) {
	//		winner = zombies[i];
	//	}
	//}

	gs.setWinner();

	printf("\n\nWinner: ");
	gs.getWinner().printZombie(true);


	system("pause");
}