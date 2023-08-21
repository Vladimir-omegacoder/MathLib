#include <iostream>
#include "MatrixInt2.h"



//---------Tests names---------
// OPERATOR_1		<<
// Transposition



//#define OPERATOR_1
//#define Transposition






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

#endif // OPERATOR_1


	return 0;

}