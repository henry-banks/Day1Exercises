#include<iostream>
using namespace std;

//Exercise 1
void ex1()
{
	//&c = 6940, &d = 9772, e(?) = 2224
	char c = 'T', d = 'S';
	char *p1 = &c;
	char *p2 = &d;
	char *p3;
	p3 = &d;

	cout << "*p3 = " << *p3 << endl; // (S)
	p3 = p1;
	cout << "*p3 = " << *p3; // (T)
	cout << ", p3 = " << p3 << endl; // (6940)
	*p1 = *p2;
	cout << "*p1 = " << *p1; // (S)
	cout << ", p1 = " << p1 << endl; // (9772)
}


//Exercise 2-3 (answer: D)
void ex2()
{
	int *p;
	int i;
	int k;
	i = 42;
	k = i;
	p = &i;

	*p = 75;

	cout << i << endl;
}


//Exercise 4:
/*
char c = 'A';
double *p = &c;

The error is that a double pointer cannot point to a char variable.
*/


//moarestuff
void other()
{
	int var = 3958648;
	float far = var;
	printf("%f\n", far);
	far = *(float*)&var;
	printf("%f\n", &far);
}

void main()
{
	other();

	printf("\n\n");
	system("pause");
}