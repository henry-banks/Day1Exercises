#include <iostream>

/*
a. "1 A 45"
b. "1 A 45"
c. "1 9 45"
d. "1 9 45 "
e. "66 4 5.6"
f. "1 B 0"
*/

int main()
{
	printf("yo.\n");

	int numVar = 0;
	char charVar = 'a';
	float floatVar = 0;

	std::cin >> numVar >> charVar >> floatVar;
	std::cout << "int: " << numVar << "\nchar: " << charVar << "\nfloat: " << floatVar << std::endl << std::endl;
	
	system("pause");
	return 0;
}