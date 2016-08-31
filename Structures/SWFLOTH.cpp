#include "SWFLOTH.h"
#include <iostream>
#include <string>
using namespace std;

SharkWithFrikkinLaserBeamsOnItsHead spawnShark()
{
	//Alert the user to what they are getting into...
	printf("Calling laser-shark from the depths of the bloody pit...\n\n");

	SharkWithFrikkinLaserBeamsOnItsHead newShark;
	//On average, a laser-shark will have 5 lasers on its head.
	newShark.numberOfLasers = 5;

	//Many years of painful research have allowed scientists to measure the bloodlust of a laser-shark.
	newShark.bloodlust = 100.0f;

	//Ferocity is determined by the bloodlust, and amplified by the amount of lasers attached to it.
	newShark.ferocity = (newShark.bloodlust / 4)*newShark.numberOfLasers;

	//This program only tracks the kills the laser-shark makes on THIS plane of existence.
	newShark.numberOfKills = 0;

	//Default shark name.  Changing is highly recommended.
	newShark.name = "Fluffles";

	return newShark;
}

void printSharkData(const SharkWithFrikkinLaserBeamsOnItsHead &inShark)
{
	printf("Info about laser-shark:\n");
	printf("-----------------------\n");
	printf("Name: %s\n", inShark.name);
	printf("Number of Lasers: %d\n", inShark.numberOfLasers);
	printf("Bloodlust: %f\n", inShark.bloodlust);
	printf("Ferocity:  %f\n", inShark.ferocity);
	printf("Kills: %d\n", inShark.numberOfKills);
}

void updateSharkData(SharkWithFrikkinLaserBeamsOnItsHead& inShark)
{
	printf("Change the values of your laser-shark:\n");

	printf("Name: ");
	cin >> inShark.name;

	printf("\nNumber of Lasers: ");
	scanf_s("%d", &inShark.numberOfLasers);

	printf("\nBloodlust(determines ferocity): ");
	scanf_s("%f", &inShark.bloodlust);
	inShark.ferocity = (inShark.bloodlust / 4)*inShark.numberOfLasers; //Update ferocity

	printf("\nKills: ");
	scanf_s("%d", &inShark.numberOfKills);
}

void exOther()
{
	const int sharkNum = 5;

	SharkWithFrikkinLaserBeamsOnItsHead myShark[sharkNum];
	int choice = -1;

	do
	{
		printf("SHARKS WITH FRIKKIN LASER BEAMS ON THEIR HEADS\n");
		printf("==============================================\n");
		printf("0. Create Laser-Sharks\n");
		printf("1. Show laser-shark data\n");
		printf("2. Edit laser-shark data\n");
		printf("3. Quit\n");

		printf("\nP.S. there are FIVE sharks.\n");

		printf("\nYour choice (0-3): ");
		cin >> choice;
		printf("\n\n");

		switch (choice)
		{
		case 0:
			for (int i = 0; i < sharkNum; i++)
			{
				myShark[i] = spawnShark();
				printf("\n\n");
			}

			break;
		case 1:
			for (int i = 0; i < sharkNum; i++)
			{
				printSharkData(myShark[i]);
				printf("\n\n");
			}
			break;
		case 2:
			for (int i = 0; i < sharkNum; i++)
			{
				updateSharkData(myShark[i]);
				printf("\n\n");
			}
			break;
		case 3:
			printf("\n\n");
			break;
		default:
			printf("\n\n");
			break;
		}
	} while (choice != 3);
}