#include <iostream>
#include "MatrixInt2.h"



//---------Tests names---------
// OPERATOR_1		<<
// Transposition
// determinant



//#define OPERATOR_1
//#define Transposition
//#define Determinan






int main() 
{

#ifdef OPERATOR_1

	//Operator "<<"
	{

		int arr[4]{ 1, 2, 3, 4 };

		mtl::MatrixInt2 matrix = arr;		// Should be "1		2"
		                                    //			 "3		4"
		std::cout << matrix;			    

	}

#endif // OPERATOR_1

#ifdef Transposition

	//Transposition
	{

		int arr[4]{ 1, 2, 3, 4 };

		mtl::MatrixInt2 matrix = arr;		// Should be "1		2"
		                                    //			 "3		4"
		std::cout << matrix << '\n';

		std::cout << matrix.Transpose() << '\n';		// Should be "1		3"
		                                                //			 "2		4"


		std::cout << matrix << '\n';                    // Should be "1		3"
		                                                //			 "2		4"

	}

#endif // Transposition

#ifdef Determinan

	//determinan
	{

		int arr[4]{ 1, 2, 3, 4 };

		mtl::MatrixInt2 matrix = arr;			

		std::cout << matrix.Determinant() << '\n';   // Should be -2

		int det = matrix.Determinant();          

		std::cout << det << '\n';					// Should be -2

	}

#endif // Determinan

	return 0;

}