#include <iostream>



#include "VectorInt.h"




//SAMPLE TESTS



int main()
{

	mtl::VectorInt t(5, 14);
	mtl::VectorInt a(5, 14);
	mtl::VectorInt b(-2, -7);

	std::cout << a.GetX() << "; " << a.GetY() << '\n';



	a = a.DivideByNum(2);
	std::cout << a.GetX() << "; " << a.GetY() << '\n';

	a = t;
	a = a.MultiplyByNum(4);
	std::cout << a.GetX() << "; " << a.GetY() << '\n';

	a = t;
	a = a.Invert();
	std::cout << a.GetX() << "; " << a.GetY() << '\n';

	a = t;
	a = a.Substract(b);
	std::cout << a.GetX() << "; " << a.GetY() << '\n';



	return 0;

}


