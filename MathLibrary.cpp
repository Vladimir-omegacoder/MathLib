#include <iostream>



#include "VectorInt.h"




//SAMPLE TESTS



int main()
{

<<<<<<< HEAD
    mtl::VectorInt vec(5, 2);
	mtl::VectorInt vec2(3, 4);

	std::cout << "Module: " << vec.Module()<<std::endl;
	std::cout << "Scalar prodyct: " << vec.ScalarProduct(vec2) << std::endl;
	std::cout << "Addition: ";
	vec.Addition(vec2).VectorPrint();
	std::cout << std::endl;
=======
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

>>>>>>> 62d1c18ffb31a033aaaad250c010ec62867a9617
}


