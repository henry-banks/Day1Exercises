#include <iostream>
//stuff
using namespace std;

int main()
{
	char firstLetter = '0';
	char lastLetter = '0';

	printf("Input two letters.\n");
	cin >> firstLetter >> lastLetter;


	char midLetter = (lastLetter-firstLetter);

	printf("\n\nThe letter in the center of those two is: %c", midLetter);
	printf("\n\n");

	system("pause");
}