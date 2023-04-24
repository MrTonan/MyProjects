#include <iostream>
#include "Inventory.h"

Inventory::Inventory()
{
	for (short int i = 0; i < 10; i++)
	{
		inventoryArray[i].itemAmount = 0;
		inventoryArray[i].itemName = "NULL";
	}

};
void Inventory::seeInventory()
{
	for (short int i = 0; i < 10; i++)
	{
		if (inventoryArray[i].itemAmount != 0)
		{
			std::cout << "[" << i + 1 << "]" << inventoryArray[i].itemName << "   x" << inventoryArray[i].itemAmount << std::endl;
		}
		else
		{
			std::cout << "[" << i + 1 << "]" << std::endl;
		}
	}
}
void Inventory::addToInventory(unsigned short addItemAmount = 0, std::string addItemName = "0", unsigned short addItemSlot = 0)
{
	if (addItemSlot <= 10)
	{
		inventoryArray[addItemSlot].itemAmount = addItemAmount;
		inventoryArray[addItemSlot].itemName = addItemName;
	}
	else
	{
		for (short int i = 0; i < 10; i++)
		{
			if (inventoryArray[i].itemAmount == 0)
			{
				inventoryArray[i].itemAmount = addItemAmount;
				inventoryArray[i].itemName = addItemName;
				std::cout << "Item succesful added to inventory" << std::endl << std::endl;
				break;
			}
		}

	}
}
void Inventory::removeInventorySlot(unsigned short removeItemSlot)
{
	inventoryArray[removeItemSlot].itemAmount = 0;
	inventoryArray[removeItemSlot].itemName = "";
}
void Inventory::clearInventory()
{
	for (short int i = 0; i < 10; i++)
	{
		inventoryArray[i].itemAmount = 0;
		inventoryArray[i].itemName = "NULL";
	}
}
