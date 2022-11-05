#include <iostream>

int main()
{
	unsigned long TestPalindrome = 0, MayPalindrome = 0, ForResult = 0;

	std::cout << "Enter Case: ";
	std::cin >> TestPalindrome;
	ForResult = TestPalindrome;

	while (TestPalindrome > 0)
	{
		MayPalindrome = MayPalindrome * 10 + (TestPalindrome % 10);
		TestPalindrome = TestPalindrome / 10;
	}
	if (ForResult == MayPalindrome)
	{
		std::cout << ForResult << " is palindrome!";
	}
	else
	{
		std::cout << ForResult << " isn't palindrome!";
	}
}
