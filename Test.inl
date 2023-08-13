


//---------Tests names---------
// OPERATOR_1		<<
// OPERATOR_2		>>
// OPERATOR_3		+a
// OPERATOR_4		-a
// OPERATOR_5		a + b
// OPERATOR_6		a - b
// OPERATOR_7		a * k
// OPERATOR_8		a / k
// OPERATOR_9		++a(a++)
// OPERATOR_10		--a(a--)
// OPERATOR_11		a += b
// OPERATOR_12		a -= b
// OPERATOR_13		a *= k
// OPERATOR_14		a /= k
// OPERATOR_15		a == b
// OPERATOR_16		a != b
// MODULUS_METHOD
// SCALAR_PRODUCT
//



//#define OPERATOR_1
//#define OPERATOR_2
//#define OPERATOR_3
//#define OPERATOR_4
//#define OPERATOR_5
//#define OPERATOR_6
//#define OPERATOR_7
//#define OPERATOR_8
//#define OPERATOR_9
//#define OPERATOR_10
//#define OPERATOR_11
//#define OPERATOR_12
//#define OPERATOR_13
//#define OPERATOR_14
//#define OPERATOR_15
//#define OPERATOR_16
//#define MODULUS_METHOD
//#define SCALAR_PRODUCT







int main()
{

#ifdef OPERATOR_1

	//CODE HERE

#endif // OPERATOR_1



#ifdef OPERATOR_2

//CODE HERE

#endif // OPERATOR_2



#ifdef OPERATOR_3

	//Operator "+a"
	{
		mtl::VectorInt a(7, -10);
		(+a).VectorPrint();		// Should be "(-7; 10)"
		std::cout << '\n';
		a.VectorPrint();		// Should be "(-7; 10)"
		std::cout << '\n';
	}

#endif // OPERATOR_3



#ifdef OPERATOR_4

	//Operator "-a"
	{
		mtl::VectorInt a(23, -3);
		(-a).VectorPrint();		// Should be "(-23; 3)"
		std::cout << '\n';
		a.VectorPrint();		// Should be "(23; -3)"
		std::cout << '\n';
	}


#endif // OPERATOR_4



#ifdef OPERATOR_5

		//Operator "a + b"
		{
			mtl::VectorInt a(7, -10), b(1, 23), c;

			(a + b).VectorPrint();		// Should be "(8; 13)"
			std::cout << '\n';

			a.VectorPrint();			// Should be "(7; -10)"
			std::cout << '\n';

			b.VectorPrint();			// Should be "(1, 23)"
			std::cout << '\n';

			c = a + b;
			c.VectorPrint();			// Should be "(8, 13)"
			std::cout << '\n';
		}

#endif // OPERATOR_5



#ifdef OPERATOR_6


		//Operator "a - b"
		{
			mtl::VectorInt a(10, -12), b(1, 1), c;

			(a - b).VectorPrint();		// Should be "(9; -13)"
			std::cout << '\n';

			a.VectorPrint();			// Should be "(10; -12)"
			std::cout << '\n';

			b.VectorPrint();			// Should be "(1, 1)"
			std::cout << '\n';

			c = a - b;
			c.VectorPrint();			// Should be "(9, -13)"
			std::cout << '\n';
		}


#endif // OPERATOR_6



#ifdef OPERATOR_7

	//Operator "a * k(k * a)"
		{
			mtl::VectorInt a(-3, 1);
			int k = -4;

			(a * k).VectorPrint();		// Should be "(12; -4)"
			std::cout << '\n';

			a.VectorPrint();			// Should be "(-3; 1)"
			std::cout << '\n';

			(k * a).VectorPrint();		// Should be "(12; -4)"
			std::cout << '\n';

			a.VectorPrint();			// Should be "(-3; 1)"
			std::cout << '\n';
		}

#endif // OPERATOR_7



#ifdef OPERATOR_8

		//CODE HERE

#endif // OPERATOR_8



#ifdef OPERATOR_9

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

#endif // OPERATOR_9



#ifdef OPERATOR_10

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

#endif // OPERATOR_10



#ifdef OPERATOR_11

		//Operator "+="
		{
			mtl::VectorInt a(-5, 15), b(3, -7);
			(a += b).VectorPrint();	// Should be "(-2; 8)
			std::cout << '\n';
			a.VectorPrint();		// Should be "(-2; 8)"
			std::cout << '\n';
		}

#endif // OPERATOR_11



#ifdef OPERATOR_12

		//Operator "-="
		{
			mtl::VectorInt a(-5, 15), b(3, -7);
			(a -= b).VectorPrint();	// Should be "(-8; 22)"
			std::cout << '\n';
			a.VectorPrint();		// Should be "(-8; 22)"
			std::cout << '\n';
		}

#endif // OPERATOR_12



#ifdef OPERATOR_13

		//Operator "*="
		{
			mtl::VectorInt a(-8, 15);
			const int k = -3;

			(a *= k).VectorPrint();	// Should be "(24; -45)"
			std::cout << '\n';

			a.VectorPrint();		// Should be "(24; -45)"
			std::cout << '\n';

		}

#endif // OPERATOR_13



#ifdef OPERATOR_14

		//Operator "/="
		{
			mtl::VectorInt a(-8, 15);
			const int k = -3;
			(a /= k).VectorPrint();	// Should be "(2; -5)"
			std::cout << '\n';
			a.VectorPrint();		// Should be "(2; -5)"
			std::cout << '\n';
			//a /= 0; //Exception, division by zero.
		}

#endif // OPERATOR_14



#ifdef OPERATOR_15

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

#endif // OPERATOR_15



#ifdef OPERATOR_16

		//Operator "!="
		{
			mtl::VectorInt a(-5, 15), b(3, -7);

			std::cout << "a: ";
			a.VectorPrint();
			std::cout << '\n';
			std::cout << "b: ";
			b.VectorPrint();
			std::cout << '\n';

			if (a != b)
			{
				std::cout << "a and b are not equal\n";
			}
			else
			{
				std::cout << "a and b are equal\n";
			}

			b.SetX(-5), b.SetY(15);

			std::cout << "a: ";
			a.VectorPrint();
			std::cout << '\n';
			std::cout << "b: ";
			b.VectorPrint();
			std::cout << '\n';

			if (a != b)
			{
				std::cout << "a and b are not equal\n";
			}
			else
			{
				std::cout << "a and b are equal\n";
			}
		}

#endif // OPERATOR_16



#ifdef MODULUS_METHOD

		mtl::VectorInt vec(5, 2);
		std::cout << "Module: " << vec.Module() << std::endl;

#endif // MODULUS_METHOD



#ifdef SCALAR_PRODUCT

		//Scalar product
		{
			mtl::VectorInt a1(-5, 15), b1(3, -7);
			std::cout << mtl::VectorInt::ScalarProduct(a1, b1) << '\n';	//Should be "-120"

			mtl::VectorInt a2(3, 1), b2(1, -3);
			std::cout << mtl::VectorInt::ScalarProduct(a2, b2) << '\n';	//Should be "0"
		}

#endif // SCALAR_PRODUCT




		return 0;

}
