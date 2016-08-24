//GIVE ME ARRAYS.  GIVE ME FOR LOOPS.  AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAH

#include <iostream>

using namespace std;

int main()
{
	double num1, num2, num3, num4, num5;
	//This would be SO much simpler with arrays/vectors!
	double sort1, sort2, sort3, sort4, sort5;
	double sum = 0;
	double tempNum = 0;

	bool numCheck = false;
		
	printf("This program takes 5 numbers and does one of the following:\n");
	printf("1. Print numbers in ASCENDING order if the sum of the numbers is POSITIVE.\n");
	printf("2. Print numbers in DESCENDING order if the sum of the numbers is NEGATIVE.\n");
	printf("3. Print numbers in THE ORDER THEY WERE INPUT if the sum of the numbers is ZERO.\n\n");

	printf("Please input 5 numbers.");
	scanf_s("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
	printf("\n");

	sum = num1 + num2 + num3 + num4 + num5;
	
	//dgsduhj
	sort1 = num1;
	sort2 = num2;
	sort3 = num3;
	sort4 = num4;
	sort5 = num5;

	if (sum > 0)
	{
		if (sort1 >= sort2 && sort1 >= sort3 && sort1 >= sort4 && sort1 >= sort5)
		{
			
		}
	}
	else if (sum < 0)
	{

	}
	else if (sum == 0)
	{
		printf("%d, %d, %d, %d, %d", num1, num2, num3, num4, num5);
	}
	else { printf("ERROR: Sum is not a number!\n\n"); }
}