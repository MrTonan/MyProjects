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
		std::cout << "Функции: " << std::endl;
		std::cout << " 1. Открыть инвентарь" << std::endl;
		std::cout << " 2. Добавить в инвентарь" << std::endl;
		std::cout << " 3. Очистить инвентарь" << std::endl;
		std::cout << " Иначе. Выйти" << std::endl;

		std::cin >> input;

		switch (input)
		{
		case('1'):
			inv.seeInventory();
			break;
		case('2'):
			std::cout << "Введите имя предмета: ";
			std::cin >> name;
			std::cout << "Введите колличество предметов: ";
			std::cin >> amount;
			inv.addToInventory(amount, name);
			break;
		case('3'):
			inv.clearInventory();
			break;
		default:
			std::cout << "Выходим" << std::endl;
			break;
		}
	}
}
