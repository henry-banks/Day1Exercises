#include <iostream>
/*
	Exercise 4
*/


int main()
{
	int a, b, tempVar;

	printf("Input number a: ");
	scanf_s("%d", &a);

	printf("\nInput number b: ");
	scanf_s("%d", &b);

	tempVar = a;
	a = b;
	b = tempVar;

	printf("\n\nNumber a: %d\n", a);
	printf("Number b : %d", b);

	getchar();
	getchar();
}