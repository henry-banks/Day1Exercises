#include <iostream>

using namespace std;

//I am opposed to making a new project for each exercise.  I like things concise.

//Also, this project holds all the exercises that don't ask me to 'Write a program'/make something meant to be run.

void exercise_4()
{
	int choice;

	switch (choice)
	{
	case 1:
		printf("1");
		break;
	case 2:
		printf("2 or 3");
		break;
	case 3:
		printf("2 or 3");
		break;
	case 4:
		printf("4");
		break;
	default:
		printf("Invalide");
		break;
	}
}

void exercise_5()
{
	int x = 0, y = 0;

	//I rather like ternary operators.  I'm one of those programmers who doens't like too much whitespace.
	x == 0 ? y = 0 : y = 10;
}

void exercise_8()
{
	bool flag = true;
	int numPos = 35, numNeg = -55;
	char firstChar = 'J', secondChar = 'O';
	double firstPrice = 5.60;

	/*
	a. numPos > numNeg == true
	b. firstChar > secondChar == false
	c. !(numPos + numNeg) == false
	d. (numPos == -30) || (numNeg == -55) == true
	e. (firstPrice >= 4.1) && (firstPrice <= 9.9) == false
	f. !flag && (secondChar <= 'R') == false
	g. (numPos < 66) || (flag && numPos > 35) == true
	h. ++numpos == 36 == true
	i. numPos++ == 36 == false
	j. (firstChar == 'j) || (firstChar == 'J') == true
	*/
}

void exercise_9()
{
	bool a = true, b = false;
	/*
	a. (a || b) || (a && b) == true
	b. !((!a) && (a)) || (a && b) == true
	c. !((5 || a) || (!b)) && (!(a) && b) == false
	d. a || b && a == true
	e. !a&&b == false
	*/
}


int main()
{
	//nothing goes here
}