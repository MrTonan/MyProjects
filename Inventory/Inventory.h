#include <string>
#pragma once
class Inventory
{
public:
	Inventory();
	void seeInventory();
	void addToInventory(short int addItemAmount, std::string addItemName);
	void clearInventory();
private:
	struct inventorySlot
	{
		short int itemAmount;
		std::string itemName;
	};

	inventorySlot inventoryArray[10];
};

