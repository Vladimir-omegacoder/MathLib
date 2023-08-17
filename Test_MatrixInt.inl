#include <iostream>
#include "MatrixInt2.h"




void PrintMtrix(const mtl::MatrixInt2 &matrix)
{

	for (int i = 0; i < 2; ++i)
	{

		for (int j = 0; j < 2; ++j)
		{

			std::cout << matrix(i, j) << '\t';

		}

		std::cout << '\n';

	}

}



int main() 
{

	int arr[4] {1, 2, 3, 4};


	mtl::MatrixInt2 matrix = arr;
	mtl::MatrixInt2 copy(arr);
	copy = arr;


	copy(0, 0) = 9;
	copy(1, 1) = 8;

	PrintMtrix(copy);
	std::cout << '\n';
	std::cout << '\n';


	PrintMtrix(matrix);
	std::cout << '\n';
	std::cout << '\n';

	return 0;

}