#include <iostream>



#include "VectorInt.h"




//SAMPLE TESTS



int main()
{

	//Prefix decrement
	{
		mtl::VectorInt a(-5, 15);
		(--a).VectorPrint();	// Should be "(-6; 14)"
		std::cout << '\n';

		a.VectorPrint();		// Should be "(-6; 14)"
		std::cout << '\n';
	}

	std::cout << '\n';

	//Postfix decrement
	{
		mtl::VectorInt a(-5, 15);
		(a--).VectorPrint();	// Should be "(-5; 15)
		std::cout << '\n';

		a.VectorPrint();		// Should be "(-6; 14)"
		std::cout << '\n';
	}

	std::cout << '\n';

	//Operator "+="
	{
		mtl::VectorInt a(-5, 15), b(3, -7);
		(a+=b).VectorPrint();	// Should be "(-2; 8)
		std::cout << '\n';

		a.VectorPrint();		// Should be "(-2; 8)"
		std::cout << '\n';
	}




	return 0;

}


