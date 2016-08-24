#include <iostream>
using namespace std;

void ex1()
{
	for (int i = 100; i >= 0; i--)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 99; i >= 0; --i)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 100; i > 0; i--)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 100; i >= 0; i = i - 2)
	{
		printf("%d ", i);
	}
	printf("\n");
}

void ex2()
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0){ printf("Fizz "); }
		else if (i % 5 == 0 && i % 3 != 0) { printf("Buzz "); }
		else if (i % 3 == 0 && i % 5 == 0) { printf("FizzBuzz "); }
		else { printf("%d ", i); }
	}
	printf("\n");
}

void ex3()
{
	int sum = 0;
	for (int i = 999; i > 0; i--)
	{
		if (i % 3 == 0 || i % 5 == 0) { sum += i; }
	}
	printf("Sum of all multiples of 3 or 5 below 1000: %d\n", sum);
}

void ex4()
{
	//no thanks
}

int main()
{
	/*
	char choice = '0';

	do {
		int menuChoice = 0;

		printf("blibbity blah.\n");
		scanf_s("%d", &menuChoice);
		printf("\n");

		switch (menuChoice)
		{
		case 1:
			ex1();
			break;
		default:
			printf("ERROR");
			break;
		}

		printf("\nGo again?(y/n):\n");
		scanf_s("%c", choice);

	} while (choice != 'n');
	*/
	ex1();
	printf("\n");
	ex2();
	printf("\n");
	ex3();

	printf("\n");
	system("pause");
}