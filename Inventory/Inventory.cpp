#include <iostream>
#include "Inventory.h"

Inventory::Inventory()
{
	setlocale(LC_ALL, "Russian");
	for (short int i = 0; i < 10; i++)
	{
		inventoryArray[i].itemAmount = 0;
		inventoryArray[i].itemName = "NULL";
	}

};
void Inventory::seeInventory()
{
	std::cout << "------------------------------" << std::endl;
	for (short int i = 0; i < 10; i++)
	{
		if (inventoryArray[i].itemAmount != 0)
		{
			std::cout << inventoryArray[i].itemName << "   x" << inventoryArray[i].itemAmount << std::endl;
		}
	}
	std::cout << "------------------------------" << std::endl;
}
void Inventory::addToInventory(short int addItemAmount, std::string addItemName)
{
	for (short int i = 0; i < 10; i++)
	{
		if (inventoryArray[i].itemAmount == 0)
		{
			inventoryArray[i].itemAmount = addItemAmount;
			inventoryArray[i].itemName = addItemName;
			std::cout << "Предмет добавлен в инвентарь" << std::endl << std::endl;
			break;
		}
	}
}
void Inventory::clearInventory()
{
	for (short int i = 0; i < 10; i++)
	{
		inventoryArray[i].itemAmount = 0;
		inventoryArray[i].itemName = "NULL";
	}
}