#include <iostream> //I LIKE IOSTREAM BETTER.
#include <cstdlib>
#include <ctime>
using namespace std;

//Exercise 1
void PrintInt(int variable)
{
	cout << variable << endl;
}
void ex1()
{
	int i = 1;
	PrintInt(i);
	{
		PrintInt(i);
		int i = 2;
		PrintInt(i);
		{
			PrintInt(i);
			int i = 3;
			PrintInt(i);
		}
		PrintInt(i);
	}
	PrintInt(i);
}

//Exercise 2
double GiveSmaller(double num1, double num2)
{
	if (num1 < num2) { return num1; }
	else { return num2; }

}
void ex2()
{
	double num1=0, num2=0;

	printf("Enter value 1: ");
	cin >> num1; //scanf_s didn't want to work today.

	printf("\nEnter value 2: ");
	cin >> num2;

	printf("\n\nThe smaller number is: %f", GiveSmaller(num1, num2));
}

//#3 answer: overriding 

//Exercise 4
float Half(float inNum)
{
	return inNum / 2;
}
void ex4()
{
	float number = 16.721f;
	float result = Half(number);

	cout << result;
}

bool CoinToss(int num)
{
	if (num % 2 == 0) { return true; }
	return false;
}
void ex5()
{
	srand(time(0)); //Setting random seed

	int loopNum = 0;
	printf("How many times do you want to toss the coin? ");
	scanf_s("%d", &loopNum); //it didn't want to work in ex2 because I forgot the &.  I'm still not used to that.

	for (int i = 0; i < loopNum; i++)
	{
		int randNum = rand();
		CoinToss(randNum) ? printf("\nHeads") : printf("\nTails");
	}
}

//#6 is N/A


//Exercise 7
int SumTo(int N)
{
	int sum = 0;
	for (int i = 1; i <= N; i++){
		sum += i;
	}
	return sum;
}
void ex7()
{
	int result = SumTo(3);
	cout << result << endl;

	result = SumTo(15);
	cout << result << endl;
}


//Exercise 8
int SumArray(int inArray[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += inArray[i];
	}

	return sum;
}
void ex8()
{
	int intArray[5] = { 7, 3, 2, 4, 9 };
	int result = SumArray(intArray, 5); //Should be 25
	cout << result << endl;
}


//Exercise 9
int MinArray(int inArray[], int size)
{
	int smallest = inArray[0]; //Don't set this to 0 because all the values could be negative!
	for (int i = 0; i < size; i++)
	{
		if (inArray[i] < smallest) { smallest = inArray[i]; }
	}
	return smallest;
}
void ex9()
{
	int intArray[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int result = MinArray(intArray, 7); //Should be 4
	cout << result << endl;
}

//Exercise 10
void MultByIndex(int inArray[], int outArray[], int size) //Both arrays must be the same size
{
	//This one's kinda weird
	for (int i = 0; i < size; i++)
	{
		outArray[i] = inArray[i] * i;
	}
}
void ex10()
{
	int intArray[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int outArray[7] = {};
	MultByIndex(intArray, outArray, 7); //Should be {0, 15, 14, 12, 52, 95, 48}

	for (int i : outArray)
	{
		cout << i << endl; 
	}
}


//Exercise 11
void ArrayThing(int inArray1[], int inArray2[], int outArray[], int size)
{
	for (int i = 0; i < size; i++)
	{
		outArray[i] = inArray1[i] + inArray2[i];
	}
}
void ex11()
{
	int array1[5] = { 5, 66, 9, -5, 3 };
	int array2[5] = { 4, 1, 222, 42, 413 };
	int outArray[5] = {};

	ArrayThing(array1, array2, outArray, 5);
	for (int i : outArray)
	{
		cout << i << endl;
	}
}


//Exercise 12
void Ex12Array(int inArray[], int size)
{
	//THEY KEEP GETTING WEIRDER.
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += inArray[i];
		inArray[i] = sum;
	}
}
void ex12()
{
	int inArray[7] = {6, 3, 15, 2, -100, 413, 1};
	Ex12Array(inArray, 7);
	for (int i : inArray)
	{
		cout << i << endl;
	}
}


//Exercise 13
int SearchArray(int inArray[], int size, int numToFind)
{
	for (int i = 0; i < size; i++)
	{
		if (inArray[i] == numToFind) { return i; }
	}
	return -1;
}
void ex13()
{
	int outArray[7] = { 5, 2, 13, 4, 88, 90, 42 };
	int numToFind = 88;
	int result = SearchArray(outArray, 7, numToFind);

	result != -1 ? printf("%d is at index: %d.", numToFind, result) : printf("%d is not in the array.", numToFind);
}


//Exercise 14
int Split(int inArray[], int outArray1[], int outArray2[], int size)
{
	int index1 = 0, index2 = 0; //Keeping track of the current index of each array (because it won't sync with i).

	for (int i = 0; i < size; i++)
	{
		//I like ternary operators...
		inArray[i] >= 0 ? outArray1[index1++] = inArray[i] : outArray2[index2++] = inArray[i];
	}
	return index1;
}
void ex14()
{
	int array1[7] = { 4, -4, 34, 12, -99, -8, 0 };

	//I'm filling each array with stuff it should not be full of so that I can only print stuff that it SHOULD be full of.
	//(it makes sense if you go down a couple lines)
	int outArray1[7] = {-1, -1, -1, -1 , -1 , -1 , -1 };
	int outArray2[7] = {1, 1, 1 , 1 , 1 , 1 , 1 };
	int array1Amount = Split(array1, outArray1, outArray2, 7);

	printf("outArray1: \n");
	for (int i : outArray1)
	{
		if (i >= 0) { cout << i << endl; }
	}

	printf("\noutArray1: \n");
	for (int i : outArray2)
	{
		if (i < 0) { cout << i << endl; }
	}
	printf("\n%d numbers were entered into outArray1.", array1Amount);
}


//Exercise 15
double customPow(double x, int y) //There's already a 'pow' function that does this
{
	double powX = 1; //If this is set to 0 then everything will be 0.
	for (int i = 0; i < y; i++)
	{
		powX *= x;
	}
	return powX;
}
void ex15()
{
	double num1 = 0;
	int powNum = 0;
	printf("Input base number: ");
	cin >> num1;

	printf("\nInput power (integer only): ");
	scanf_s("%d", &powNum);

	double result = customPow(num1, powNum);
	printf("\n\n%f raised to the power of %d is %f.", num1, powNum, result);

}



//Exercise 16
void LookAndSay(int inArray[], int size)
{
	//why
	int currentNum = inArray[0];
	int sum = 1;
	for (int i = 0; i < size; i++)
	{
		if (currentNum == inArray[i]){
			sum++;
		}
		else {
			printf("%d %d's\n", sum, currentNum);
			currentNum = inArray[i];
			sum = 1;
		}
	}
	//Catch the last number set
	printf("%d %d's\n", sum, currentNum);
}
void ex16()
{
	int inArray[10] = { 1, 1, 1, 1, 55, 55, 3, 4, 4, 4 };
	LookAndSay(inArray, 10);
}


//Exercise 17
// 0 = rock, 1 = paper, 2 = scissors
int compChoice()
{
	int compChoice = rand() % 3;

	printf("\nComputer choice: ");
	switch (compChoice)
	{
	case 0:
		printf("rock");
		break;
	case 1:
		printf("paper");
		break;
	case 2:
		printf("scissors");
		break;
	}

	return compChoice;
}
bool isWin(int playerChoice, int computerChoice)
{
	if (playerChoice == computerChoice) {
		printf("\nTIE.\n");
		return false; //I count ties as LOSSES.
	}
	else if ((playerChoice == 0 && computerChoice == 1) || (playerChoice == 1 && computerChoice == 2) || (playerChoice == 2 && computerChoice == 0)){
		return false;
	}
	else if ((playerChoice == 1 && computerChoice == 0) || (playerChoice == 2 && computerChoice == 1) || (playerChoice == 0 && computerChoice == 2)) {
		return true;
	}
	else {
		printf("\nERROR: incorrect choice??!\n");
		return false; //I count errors as LOSSES.
	}
}
void ex17()
{
	srand(time(0));
	char choice = 'y';
	do
	{
		char playerChoice = 'r';
		
		int playerNum; //Used to convert char to int for the isWin function.
		printf("HEY LET'S PLAY ROCK PAPER SCISSORS.\n\n");
		printf("Input choice (r, p, s): ");
		scanf_s("%c", &playerChoice);

		switch (playerChoice)
		{
		case 'r':
			playerNum = 0;
			break;
		case 'p':
			playerNum = 1;
			break;
		case 's':
			playerNum = 2;
			break;
		default:
			playerNum = 0;
			break;
		}


		int compNum = compChoice(); //THIS IS HORRIBLE BUT WHATEVER.

		if (isWin(playerNum, compNum)){
			printf("\nYou won!\n");
		}
		else {
			printf("\nThe computer won.\n");
		}

		printf("\n\nPlay again? (y/n): ");
		cin >> choice;
		printf("\n\n");
		getchar();

	} while (choice != 'n');
}

int main()
{
	ex17();

	printf("\n\n");
	system("pause");

	return 0;
}