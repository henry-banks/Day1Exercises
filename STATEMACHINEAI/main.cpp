#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Entity.h"

void main()
{
	srand(time(0));

	Entity a, b;
	a.init("Urgle", 30);
	b.init("Burgle", 40);

	while (a.isAlive() && b.isAlive())
	{
		printf("\n");
		a.printEntitiy();
		b.printEntitiy();

		a.tick(b);
		b.tick(a);

		
	}

	printf("\n");
	a.printEntitiy();
	b.printEntitiy();

	printf("\n");
	system("pause");
}