#include <iostream>
#include <string>

int main()
{
	long double a = 0, b = 0;
	char c = '!';
	std::string result = "Result of ";

	std::cout << "[Input1][Operator][Input2] :";
	std::cin >> a;
	do
	{
		std::cin >> c >> b;
		switch (c)
		{
		case('+'):
			a +=b ;
			result.append("Addition:       ");
			break;
		case('-'):
			a -= b;
			result.append("Subtraction:    ");
			break;
		case('*'):
			a *= b;
			result.append("Multiplication: ");
			break;
		case('/'):
			a /= b;
			result.append("Division:       ");
		default:
			break;
		}
		if (c == '/' && b == 0)
		{
			break;
		}
		result.append(std::to_string(a));
		std::cout << result;
		result = "Result of ";
	} while (true);
}

/* Previous Version

#include <iostream>
#include <string>

int main()
{
	long a = 0, b = 0;
	char c = '!';
	std::string result = "Result of ";

	std::cout << "[Input1] [Operator] [Input2] :";
	std::cin >> a >> c >> b;

	switch (c)
	{
	case('+'):
		result.append("Addition: " + std::to_string(a + b));
	std::cout << result;
		break;
	case('-'):
		result.append("Subtraction: " + std::to_string(a - b));
	std::cout << result;
		break;
	case('*'):
		result.append("Multiplication: " + std::to_string(a * b));
		std::cout << result;
		break;
	case('/'):
		result.append("Division: " + std::to_string(a / b));
		std::cout << result;
	default:
	std::cout << result;
		break;
	}
}
*/
