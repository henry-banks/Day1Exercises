//Conditionals exercise

#include <iostream>

using namespace std;

//Question 1: a simple if statement.
void q_1_if_statement()
{
	int x, y = 0;

	if (y == 0)
	{
		x = 100;
	}
}

int main()
{
	int
		num1 = 0, num2 = 0;
	printf("Input 2 numbers.\n");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2){ printf("\n%d is greater than or equal to %d.\n\n", num1, num2); }
	else { printf("\n%d is greater than or equal to %d.\n\n", num2, num1); }

	system("pause");
}