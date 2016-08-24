#include <iostream>
using namespace std;

int main()
{
	int monthNum;
	printf("Input the number of a month (January = 1, March = 3, etc).\n");
	scanf_s("%d", &monthNum);
	printf("\n");

	if (monthNum % 2 == 0 && monthNum != 2)	{ printf("Days in month: 30"); }
	else if (monthNum == 2)	{ printf("Days in month: 28 or 29"); } //Don't forget February...
	else if (monthNum % 2){ printf("Days in month: 31"); }
	else { printf("ERROR: Something went HORRIBLY WRONG."); }

	printf("\n\n");
	system("pause");
}