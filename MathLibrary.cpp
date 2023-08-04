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





	//IDEAS
	// 
	// Shape interface class
	// Triangle, Rectangle, Circle etc.
	//


	return 0;

}


