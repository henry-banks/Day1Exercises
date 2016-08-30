#include <iostream>
#include <string>
using namespace std;

//Exercise 1
struct Player
{
	string name;
	float health;
	float score;
	float position;
	float velocity;
};

struct Point2D
{
	int x;
	int y;
};
struct Color
{
	float R;
	float G;
	float B;
};
struct Rectangle2D
{
	Point2D points[4];
	Color color;
};


//Exercise 2
void ex2()
{
	Player player;
	printf("Input player name: ");
	cin >> player.name;

	printf("\nInput player health: "); //I ACCIDENTALLY DID HEALTH AND BY THE TIME I REALIZED IT I WAS IN EXERCISE 5 AND IT WAS TOO LATE BUT THIS IS FINE THEY ARE BOTH FLOATS.
	cin >> player.health;

	printf("\n\nPlayer name: ");
	cout << player.name << endl;
	printf("Player health: %f", player.health);
}


//Exercise 3
Player ex3()
{
	Player player;
	printf("Input player name: ");
	cin >> player.name;

	printf("Input player health: ");
	cin >> player.health;

	printf("\n\nPlayer name: ");
	cout << player.name << endl;
	printf("Player health: %f", player.health);

	return player;
}

//Exercise 4
Player AssignPlayer()
{
	Player player;
	printf("Input player name: ");
	cin >> player.name;

	printf("Input player health: ");
	scanf_s("%f", &player.health);

	return player;
}
void ex4()
{
	Player playerArray[5];
	for (int i = 0; i < 5; i++)
	{
		playerArray[i] = AssignPlayer();
		printf("\n");
	}

	for (Player i : playerArray)
	{
		printf("\nName: ");
		cout << i.name << endl;
		printf("Health: %f\n\n", i.health);
	}
}


//Exercise 5
//All these exercises are using the same code.  AAAAAAAAAAAAAH
void ex5()
{
	Player playerArray[5];
	for (int i = 0; i < 5; i++)
	{
		playerArray[i] = AssignPlayer();
		printf("\n");
	}

	for (Player i : playerArray)
	{
		printf("\nName: ");
		cout << i.name << endl;
		printf("Health: %f\n\n", i.health);
	}

	string name2;
	printf("Input the name of one of the players(case-sensitive): ");
	cin >> name2;

	bool isPlayer;
	for (Player i : playerArray)
	{
		if (i.name == name2)
		{
			printf("Health: %f", i.health);
			isPlayer = true;
			break;
		}
	}
	if (isPlayer) { printf("Player not in array!"); }
}


//Exercise 6
struct Item
{
	string name;
	float cost;
	int quantity;
};
struct Shop
{
	float money;
	Item items[1000]; //I do hope there are no more than 1 thousand items.
	//also i wish i could use vectors for this...
};

void ChangePriceSingle(Shop &inShop)
{
	string itemName;
	float newPrice;

	printf("\nName of item(case-sensitive): ");
	cin >> itemName;
	printf("\nNew price: ");
	cin >> newPrice;

	bool isFound = false;
	for (Item i : inShop.items)
	{
		if (i.name == itemName)
		{
			i.cost = newPrice;
			isFound = true;
			break;
		}
		if (isFound) {
			cout << "\n\nNew price for " << i.name << ": " << i.cost << endl;
		}
		else {
			cout << i.name << " not found.\n";
		}
	}

}
void ChangePriceAll(Shop &inShop)
{
	printf("This could take a while.  Input -1 at any time to exit.\n");
	printf("Print enter to begin.");
	getchar();

	int newCost; //I do this to search for -1, the exit code.
	
	do
	{
		for (Item i : inShop.items)
		{
			cout << "\n" << i.name << ".  New cost: ";
			cin >> newCost;
			if (newCost != -1) { i.cost = newCost; }
		}
	} while (newCost != -1);
	
}
void BuyItem(Shop &inShop)
{
	string itemName;
	int numToSell;

	printf("Choose item to sell(case-sensitive): ");
	cin >> itemName;
	printf("Amount to sell (will sell all if not enough): ");
	cin >> numToSell;

	bool isFound = false;
	for (Item i : inShop.items)
	{
		if (i.name == itemName)
		{
			//Open these if you want to die. :)
			if (i.quantity >= numToSell){
				for (int j = 0; j < numToSell; j++) {
					inShop.money += i.cost;
					i.quantity--;
				}
			}
			else {
				for (int j = 0; j < i.quantity; j++) {
					inShop.money += i.cost;
					i.quantity--;
				}
			}
			break;
		}
	}
	if (!isFound){
		cout << "\n" << itemName << " not found!";
	}
}
void SellItem(Shop &inShop)
{
	string itemName;
	int numToBuy;
	float itemCost;
	char isNew;

	printf("Choose item to buy(case-sensitive): ");
	cin >> itemName;
	printf("Amount to buy: ");
	cin >> numToBuy;
	printf("Cost of item: ");
	cin >> itemCost;
	printf("Is this a new item (y/n)? ");
	cin >> isNew;

	if (isNew == 'y')
	{
		Item newItem;
		newItem.name = itemName;
		newItem.quantity = numToBuy;
		newItem.cost = itemCost;

		inShop.money -= itemCost*numToBuy; //I'm going to let the shop go into debt if need be.
	}

	else
	{
		bool isFound = false;
		for (Item i : inShop.items)
		{
			if (i.name == itemName)
			{
				i.quantity += numToBuy;
				inShop.money -= i.cost*numToBuy;
			}
		}
		if (!isFound) {
			cout << "\n" << itemName << " not found!";
		}
	}

}
void ShowItems(Shop &inShop)
{
	//Simplest one. -3-
	printf("\n\n");
	for (Item i : inShop.items)
	{
		cout << "Name: " << i.name << " Cost: " << i.cost << " Quantity: " << i.quantity << "\n";
	}
}

void ex6()
{
	Shop shop;
	shop.money = 1000; //I'll start with 1K money.
	int choice = 0;

	do
	{
		printf("RPG Shop\n");
		printf("============================\n");
		printf("Money: %f\n", shop.money);
		printf("============================\n");
		printf("0. Change price of 1 item\n");
		printf("1. Change price of ALL items\n");
		printf("2. Buy item\n");
		printf("3. Sell item\n");
		printf("4. Show all items\n");
		printf("4. Exit\n\n");

		printf("Your Choice (0-5): ");
		cin >> choice;

		switch (choice)
		{
		case 0:
			ChangePriceSingle(shop);
			printf("\n\n");
			break;
		case 1:
			ChangePriceAll(shop);
			printf("\n\n");
			break;
		case 2:
			BuyItem(shop);
			printf("\n\n");
			break;
		case 3:
			SellItem(shop);
			printf("\n\n");
			break;
		case 4:
			ShowItems(shop);
			printf("\n\n");
			break;
		case 5:
			break;
		default:
			break;
		}

	} while (choice != 5);
}

int main()
{
	ex6();


	printf("\n\n");
	system("pause");
}