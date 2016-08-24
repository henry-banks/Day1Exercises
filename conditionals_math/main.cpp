#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char choice = '0';

	int num1 = 0, num2 = 0, resultNum = 0;
	char mathChar = '0';

	do {
		printf("Input 2 numbers.\n");
		scanf_s("%d %d", &num1, &num2);
		getchar();
		cout << "\nInput a mathimatical operator (+, -, *, /, %).\n";
		scanf_s("%c", &mathChar);

		switch (mathChar)
		{
		case '+':
			resultNum = num1 + num2;
			printf("%d + %d = %d", num1, num2, resultNum);
			break;
		case '-':
			resultNum = num1 - num2;
			printf("%d - %d = %d", num1, num2, resultNum);
			break;
		case '*':
			resultNum = num1 * num2;
			printf("%d * %d = %d", num1, num2, resultNum);
			break;
		case '/':
			resultNum = num1 / num2;
			printf("%d / %d = %d", num1, num2, resultNum);
			break;
		case '%':
			resultNum = num1 % num2;
			cout << num1 << " % " << num2 << " = " << resultNum;
			break;
		default:
			printf("ERROR: Invalid input!");
			break;
		}
		printf("\n\nTry again? (y/n)\n");
		cin >> choice;
		printf("\n");
	}
	while (choice != 'n');

	printf("\n");
	system("pause");
}