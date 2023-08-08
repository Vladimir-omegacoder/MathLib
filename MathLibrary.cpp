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

	//Prefix increment
	{
		mtl::VectorInt a(-5, 15);
		(++a).VectorPrint();	// Should be "(-4; 16)"
		std::cout << '\n';

		a.VectorPrint();		// Should be "(-4; 16)"
		std::cout << '\n';
	}

	std::cout << '\n';

	//Postfix increment
	{
		mtl::VectorInt a(-5, 15);
		(a++).VectorPrint();	// Should be "(-5; 15)
		std::cout << '\n';

		a.VectorPrint();		// Should be "(-4; 16)"
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

	std::cout << '\n';

	//Operator "+="
	{
		mtl::VectorInt a(-5, 15), b(3, -7);
		(a -= b).VectorPrint();	// Should be "(-8; 22)
		std::cout << '\n';

		a.VectorPrint();		// Should be "(-8; 22)"
		std::cout << '\n';
	}

	std::cout << '\n';

	//Operator "=="
	{
		mtl::VectorInt a(-5, 15), b(3, -7);

		std::cout << "a: ";
		a.VectorPrint();
		std::cout << '\n';
		std::cout << "b: ";
		b.VectorPrint();
		std::cout << '\n';

		if (a == b) 
		{
			std::cout << "a and b are equal\n";
		}
		else
		{
			std::cout << "a and b are not equal\n";
		}

		b.SetX(-5), b.SetY(15);

		std::cout << "a: ";
		a.VectorPrint();
		std::cout << '\n';
		std::cout << "b: ";
		b.VectorPrint();
		std::cout << '\n';

		if (a == b)
		{
			std::cout << "a and b are equal\n";
		}
		else
		{
			std::cout << "a and b are not equal\n";
		}
	}

	std::cout << '\n';

	//Operator "/="
	{
		mtl::VectorInt a(-8, 15);
		const int k = -3;

		(a /= k).VectorPrint();	// Should be "(2; -5)
		std::cout << '\n';

		a.VectorPrint();		// Should be "(2; -5)"
		std::cout << '\n';

		//a /= 0; //Exception, division by zero.
	}





	return 0;

}


