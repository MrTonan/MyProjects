#include "Inventory.h"
#include <iostream>

int main()
{
	Inventory inv;
	char input = '0';
	unsigned short amount = 0;
	char name[16];
	unsigned short slot = 0;

	std::cout << "Starting..." << std::endl;

	while (true)
	{
		if (input != '0' && input != '1' && input != '2' && input != '3')
		{
			break;
		}
		std::cout << "Functions: " << std::endl;
		std::cout << " 1.    Open Inventory" << std::endl;
		std::cout << " 2.    Add item to slot" << std::endl;
		std::cout << " 3.    Remove item to slot" << std::endl;
		std::cout << " 4.    Clear inventory" << std::endl;
		std::cout << " Else. Exit" << std::endl;
		std::cout << "";

		std::cin >> input;

		switch (input)
		{
		case('1'):
			std::cout << "------------------------------" << std::endl;
			inv.seeInventory();
			std::cout << "------------------------------" << std::endl;
			break;
		case('2'):
			std::cout << "- Enter item's name: ";
			std::cin >> name;
			std::cout << "- Enter item's amount: ";
			std::cin >> amount;
			std::cout << "- Enter item's slot [1-10, else last empty slot]: ";
			std::cin >> slot;
			inv.addToInventory(amount, name, slot-1);
			break;
		case('3'):
			std::cin >> slot;
			std::cout << "- Enter item's slot: ";
			inv.removeInventorySlot(slot);
			break;
		case('4'):
			inv.clearInventory();
			break;
		default:
			std::cout << "Exiting..." << std::endl;
			break;
		}
	}
}
