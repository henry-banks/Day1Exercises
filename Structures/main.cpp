#include <iostream>
#include <string>
#include "SWFLOTH.h"
using namespace std;

//Exercise 1
struct Player
{
	string name;
	float health;
	float score;
	float position;
	float velocity;
};

struct Point2D
{
	int x;
	int y;
};
struct Color
{
	float R;
	float G;
	float B;
};
struct Rectangle2D
{
	Point2D points[4];
	Color color;
};


//Exercise 2
void ex2()
{
	Player player;
	printf("Input player name: ");
	cin >> player.name;

	printf("\nInput player health: "); //I ACCIDENTALLY DID HEALTH AND BY THE TIME I REALIZED IT I WAS IN EXERCISE 5 AND IT WAS TOO LATE BUT THIS IS FINE THEY ARE BOTH FLOATS.
	cin >> player.health;

	printf("\n\nPlayer name: ");
	cout << player.name << endl;
	printf("Player health: %f", player.health);
}


//Exercise 3
Player ex3()
{
	Player player;
	printf("Input player name: ");
	cin >> player.name;

	printf("Input player health: ");
	cin >> player.health;

	printf("\n\nPlayer name: ");
	cout << player.name << endl;
	printf("Player health: %f", player.health);

	return player;
}

//Exercise 4
Player AssignPlayer()
{
	Player player;
	printf("Input player name: ");
	cin >> player.name;

	printf("Input player health: ");
	scanf_s("%f", &player.health);

	return player;
}
void ex4()
{
	Player playerArray[5];
	for (int i = 0; i < 5; i++)
	{
		playerArray[i] = AssignPlayer();
		printf("\n");
	}

	for (Player i : playerArray)
	{
		printf("\nName: ");
		cout << i.name << endl;
		printf("Health: %f\n\n", i.health);
	}
}


//Exercise 5
//All these exercises are using the same code.  AAAAAAAAAAAAAH
void ex5()
{
	Player playerArray[5];
	for (int i = 0; i < 5; i++)
	{
		playerArray[i] = AssignPlayer();
		printf("\n");
	}

	for (Player i : playerArray)
	{
		printf("\nName: ");
		cout << i.name << endl;
		printf("Health: %f\n\n", i.health);
	}

	string name2;
	printf("Input the name of one of the players(case-sensitive): ");
	cin >> name2;

	bool isPlayer;
	for (Player i : playerArray)
	{
		if (i.name == name2)
		{
			printf("Health: %f", i.health);
			isPlayer = true;
			break;
		}
	}
	if (isPlayer) { printf("Player not in array!"); }
}


//OTHER exercise
//all in SWFLOTH.h

int main()
{
	exOther();


	printf("\n\n");
	system("pause");
}