#include <iostream>
using namespace std;


int main()
{
	double a, b, c, d, e;
	printf("GIMME 5:\n");

	cin >> a >> b >> c >> d >> e;

	double average = (a+b+c+d+e) / 5;

	cout << "\nAverage: " << average;
	printf("\n\n");

	system("pause");

	getchar();
}