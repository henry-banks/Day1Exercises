#pragma once

struct SharkWithFrikkinLaserBeamsOnItsHead
{
	int numberOfLasers;
	float bloodlust, ferocity;
	int numberOfKills;
	string name;
};

SharkWithFrikkinLaserBeamsOnItsHead spawnShark();
void printSharkData(const SharkWithFrikkinLaserBeamsOnItsHead &inShark);
void updateSharkData(SharkWithFrikkinLaserBeamsOnItsHead& inShark);

//Essentially main function
void exOther();