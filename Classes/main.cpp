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
	gs.setWinner();

	printf("\n\nWinner: ");
	gs.getWinner().printZombie(true);


	system("pause");
}