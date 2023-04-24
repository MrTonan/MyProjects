#include <string>
#pragma once
class Inventory
{
public:
	Inventory();
	void seeInventory();
	void addToInventory(unsigned short addItemAmount, std::string addItemName, unsigned short addItemSlot);
	void removeInventorySlot(unsigned short removeItemSlot);
	void clearInventory();
private:
	struct inventorySlot
	{
		unsigned short itemAmount = 0;
		std::string itemName = "0";
	};

	inventorySlot inventoryArray[10];
};
