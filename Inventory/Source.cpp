#include "Inventory.h"
#include <iostream>

int main()
{
	Inventory inv;
	char input = '0';
	short int amount = 0;
	char name[16];

	std::cout << "Hello" << std::endl;

	while (true)
	{
		if (input != '0' && input != '1' && input != '2' && input != '3')
		{
			break;
		}
		std::cout << "Functions: " << std::endl;
		std::cout << " 1. Open Inventory" << std::endl;
		std::cout << " 2. Add item to inventory" << std::endl;
		std::cout << " 3. Clear inventory" << std::endl;
		std::cout << " Else. Exit" << std::endl;

		std::cin >> input;

		switch (input)
		{
		case('1'):
			inv.seeInventory();
			break;
		case('2'):
			std::cout << "Enter item's name: ";
			std::cin >> name;
			std::cout << "Enter item's amount: ";
			std::cin >> amount;
			inv.addToInventory(amount, name);
			break;
		case('3'):
			inv.clearInventory();
			break;
		default:
			std::cout << "Exiting..." << std::endl;
			break;
		}
	}
}
