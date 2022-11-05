#include <iostream>

int main()
{
	typedef unsigned short ushort;
	ushort marks = 0;
	ushort buff = 0;

	std::cout << "Enter your marks: ";

	for (ushort i = 0; i < 19; i++)
	{
		std::cin >> buff;
		marks += buff;
	}
	std::cout << "Your GPA is: " << marks / 19.00 << std::endl;
	return 1;
}