#include <iostream>
#include <ctime>
#include <cstdlib> //Using random numbers for #7.
using namespace std;

void ex1() //technically does nothing
{
	/*
	1. yes
	2. no, more values than the array can hold
	3. yes
	4. no, values should not be blank.  Also, there are more values than the array can store
	5. yes
	6. no, non-sized arrays must have initial values
	7. no, size of array cannot be negative
	8. no, no curly braces around initial values
	*/

	int numbers[10] = { 0,0,1,0,0,1,0,0,1,1 };
	//int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 };
	double radii[10] = { 3.2, 4.7 };
	//int table[7] = { 2, , , , 27, , 45, 39 };
	char codes[] = { 'A', 'X', '1', '2', 's' };
	//int blanks[];
	//int collection[-20];
	//int hours[3] = 8, 12, 16;

	printf("\n");
}

void ex2()
{
	int values[] = { 2, 6, 10, 14 };
	/*
	a. 10
	b. 3
	c. 6
	d. 14
	e. NOTHING BECAUSE THERE ARE ONLY 4 VARIABLES AND BECAUSE ARRAYS COUNT UP FROM 0 THE HIGHEST YOU CAN GET IS 3.
	*/
	cout << values[2];
	cout << ++values[0];
	cout << values[1]++;
	int x = 2;
	cout << values[++x];
	//cout << values[4];
}

void ex3()
{
	int data[10];
	int numToFill = 10;

	for (int i : data)
	{
		data[i] = numToFill--;
	}
}

void ex4()
{
	int numArray[5];
	printf("Input 5 numbers.\n");
	cin >> numArray[4] >> numArray[3] >> numArray[2] >> numArray[1] >> numArray[0];
	printf("\n\n");

	for (int i : numArray)
	{
		printf("%d ", i);
	}
}

void ex5()
{
	int numArray[10];
	int bigNum = 0, smallNum = 0;
	printf("Input 10 numbers.\n");
	for (int i = 0; i < 10; i++){ scanf_s("%d", &numArray[i]); } //I am NOT writing the same thing 10 times.

	//Find largest number
	for (int i = 0;i < 10;i++)
	{
		if(i == 0){ smallNum = bigNum = numArray[i]; }
		if (numArray[i] > bigNum) { bigNum = numArray[i]; }
		if (numArray[i] < smallNum) { smallNum = numArray[i]; }
	}

	printf("\n\nLargest Number: %d.  Smallest number: %d.\n", bigNum, smallNum);

}

void ex6()
{
	int numArray[3][3];

	//I can't use a for-loop variable because I will be using TWO for-loops.
	int numToAdd = 1;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			numArray[i][j] = numToAdd++;
			printf("%d ", numArray[i][j]);
		}
		printf("\n");
	}
}

void ex7()
{
	srand(time(NULL));

	int days[29][5];
	
	//Populate array with  R A N D O M  N U M B E R S
	printf("Populating array with 145 random numbers between 0 and 100...\n\n");
	for (int i = 0; i < 29; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			days[i][j] = rand() % 101;
			printf("%d ", days[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//Row sum
	for (int i = 0; i < 29; i++)
	{
		//This variable needs to be inside the loop because it changes for each row
		//and this is easier than making a bunch of rowSums or setting rowSum to 0
		//at the end of each loop.
		//Same thing for columnSum in the for-loop below.
		int rowSum = 0;

		for (int j = 0; j < 5; j++)
		{
			rowSum += days[i][j];
		}
		printf("Sum of row %d: %d\n", i + 1, rowSum);
	}
	printf("\n");

	//Column sum
	for (int i = 0; i < 5; i++)
	{
		int columnSum = 0;

		for (int j = 0; j < 29; j++)
		{
			columnSum += days[j][i];
		}
		printf("Sum of column %d: %d\n", i + 1, columnSum);
	}
	printf("\n");
}

void ex8()
{
	int hpArray[] = { 100,100,100,100,100 };
	for (int i = 0; i < 5; i++)
	{
		int character;

		printf("Select character number (1-5) to be attacked:\n\n", i + 1);
		scanf_s("%d", &character);
		
		//Ternary operator
		hpArray[character-1] > 0 ? hpArray[character - 1] -= 40 : printf("That character is dead and cannot be attacked.\n\n");
	}
	
	printf("Party HP: ");
	for (int i : hpArray)
	{
		printf("%d, ", i);
	}
	printf("\n");
}

void ex9()
{

}

int main()
{

	ex8();

	printf("\n");
	system("pause");
}