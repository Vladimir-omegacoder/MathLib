#include <iostream>



#include "VectorInt.h"








int main()
{

    mtl::VectorInt vec(5, 2);
	mtl::VectorInt vec2(3, 4);

	std::cout << "Module: " << vec.Module()<<std::endl;
	std::cout << "Scalar prodyct: " << vec.ScalarProduct(vec2) << std::endl;
	std::cout << "Addition: ";
	vec.Addition(vec2).VectorPrint();
	std::cout << std::endl;
}


