#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

	char firstChar = '0', secondChar = '0', midChar = '0';

	printf("Input two letters:\n");
	cin >> firstChar >> secondChar;
	printf("\n");

	/*
	How I would do it if I was allowed to use if/else and toupper/tolower:
	if (firstChar > 91)
	{
		firstNum = tolower(firstChar);
		secondNum = tolower(secondChar);
	}
	else
	{
		firstNum = toupper(firstChar);
		secondNum = toupper(secondChar);
	}
	*/

	//32 is the difference between A and a.  65 is the ASCII code for A.

	firstChar = (firstChar - 65) % 32 + 65;
	secondChar = (secondChar - 65) % 32 + 65;

	midChar = (secondChar + firstChar)/2;

	printf("\nThe letter halfway betwen %c and %c is: %c", firstChar, secondChar, midChar);

	printf("\n\n");
	system("pause");
}