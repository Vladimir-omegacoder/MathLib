#include <iostream>
#include "MatrixInt2.h"



//---------Tests names---------
// OPERATOR_1		<<
// Transposition
// CONSTRUCTORS



//#define OPERATOR_1
//#define Transposition
//#define CONSTRUCTORS




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

#ifdef CONSTRUCTORS

	//Default constructor
	{

		mtl::MatrixInt2 matrix;		//OK

	}

	//Constructor through static int array
	{

		int low_size[1]{ 0 };
		int high_size[7]{ 0, 1, 2, 3, 4, 5, 6 };
		int normal_size[4]{ 0, 1, 2, 3 };

		//mtl::MatrixInt2 l(&low_size);		// Compile error
		//mtl::MatrixInt2 h(&high_size);	// Compile error
		mtl::MatrixInt2 n(&normal_size);	//OK			    

	}

	//Constructor through 2d static int array
	{

		int low_size1[1][1]{ {0} };
		int low_size2[1][2]{ {0, 1} };
		int low_size3[2][1]{ {0}, {1} };

		int high_size1[3][3]{ {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };
		int high_size2[2][3]{ {0, 1, 2}, {3, 4, 5} };
		int high_size3[3][2]{ {0, 1}, {3, 4}, {6, 7} };

		int normal_size1[2][2]{ {0, 1}, {3, 4} };

		//mtl::MatrixInt2 l1(&low_size1);		// Compile error
		//mtl::MatrixInt2 l2(&low_size2);		// Compile error
		//mtl::MatrixInt2 l3(&low_size3);		// Compile error

		//mtl::MatrixInt2 h1(&high_size1);		// Compile error
		//mtl::MatrixInt2 h2(&high_size2);		// Compile error
		//mtl::MatrixInt2 h3(&high_size1);		// Compile error

		mtl::MatrixInt2 n(&normal_size1);		// OK

	}

	//Constructor through int_init_t
	{

		//mtl::MatrixInt2 low_size({ 0, 1 });					// Runtime exception
		//mtl::MatrixInt2 high_size({ 0, 1, 2, 3, 4, 5 });		// Runtime exception
		mtl::MatrixInt2 normal_size({ 0, 1, 2, 3 });			// OK

	}

	//Constructor through initializer_list<int_init_t>
	{

		//mtl::MatrixInt2 low_size1 { { 0, 1 } };							// Runtime exception
		//mtl::MatrixInt2 low_size2 { { 0, 1 }, { 2 } };					// Runtime exception
		
		//mtl::MatrixInt2 high_size1 { { 0, 1 }, { 2, 3 }, { 4, 5 } };		// Runtime exception
		//mtl::MatrixInt2 high_size2 { { 0, 1, 2 }, { 3, 4 } };				// Runtime exception

		mtl::MatrixInt2 normal_size { { 0, 1 }, { 2, 3 } };					// OK

	}

#endif // CONSTRUCTORS

	

	return 0;

}