#include <iostream>

int main()
{
	//Variables
	char symbol;
	int height;
	//Input
	std::cout << "Enter [Symbol] [Height]:";
	std::cin >> symbol >> height;
	//Draw Romb
	for (int i = 1; i <= height; i++)
	{
		// First and Last
		if (i == 1 || i == height)
		{
			std::cout << std::string(height / 2, ' ') << symbol << std::string(height / 2, ' ') << std::endl;
		}
		// Other
		else
		{
			if (i < ((height + 1) / 2))
			{
				std::cout << std::string((height + 1) / 2 - i, ' ') << symbol << std::string(height - 2 - ((height + 1) / 2 - i) * 2, ' ') << symbol << std::string((height + 1) / 2 - i, ' ') << std::endl;
			}
			else if (i == ((height + 1) / 2))
			{
				std::cout << symbol << std::string(height - 2, ' ') << symbol << std::endl;
			}
			else
			{
				std::cout << std::string(i - (height + 1) / 2, ' ') << symbol << std::string(height - 2 - (i - (height + 1) / 2) * 2, ' ') << symbol << std::string(i - (height + 1) / 2, ' ') << std::endl;
			}
		}
	}
	return 1;
}