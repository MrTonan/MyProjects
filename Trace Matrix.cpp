#include <iostream>

int main()
{
	typedef unsigned short ushort;
	ushort matrixSize = 0;
	ushort returnValue = 0;

	std::cout << "Enter size of matrix: ";
	std::cin >> matrixSize;

	//Creating matrix
	ushort** matrix = new ushort * [matrixSize];
	for (ushort c = 0; c < matrixSize; c++)
	{
		matrix[c] = new ushort[matrixSize];
	}
	//Filling Array with random number
	srand(static_cast<unsigned int>(time(NULL)));
	for (ushort x = 0; x < matrixSize; ++x)
	{
		for (ushort y = 0; y < matrixSize; ++y)
		{
			matrix[x][y] = rand() % 100;
		}
	}
	//Finding of Trace Matrix
	for (ushort i = 0; i < matrixSize; ++i)
	{
		returnValue += matrix[i][i];
	}
	//Output array
	std::cout << std::endl;
	for (ushort x = 0; x < matrixSize; ++x)
	{
		for (ushort y = 0; y < matrixSize; ++y)
		{
			if (matrix[x][y] > 9)
			{
				std::cout << matrix[x][y] << " ";
			}
			else
			{
				std::cout << matrix[x][y] << "  ";
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	//Result
	std::cout << "Trace Matrix: " << returnValue << std::endl;
	//Delete matrix
	for (ushort f = 0; f < matrixSize; f++)
	{
		delete[] matrix[f];
	}
	delete[] matrix;
}
//29.03.2022-30.03.2022