#include <iostream>

int main()
{
	typedef unsigned short ushort;
	ushort amount = 0;
	ushort marks = 0;
	ushort buff = 0;
	
	std::cout << "Enter amount of marks: ";
	std::cin << amount;
	
	std::cout << "Enter your marks: ";

	for (ushort i = 0; i < amount; i++)
	{
		std::cin >> buff;
		marks += buff;
	}
	std::cout << "Your GPA is: " << marks / 19.00 << std::endl;
	return 1;
}
