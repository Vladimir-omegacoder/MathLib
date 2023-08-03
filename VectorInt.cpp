#include "VectorInt.h"


<<<<<<< HEAD
int mtl::VectorInt::ScalarProduct(const VectorInt& vec) 
{
	return (m_x * vec.m_x) + (m_y * vec.m_y);
}


mtl::VectorInt mtl::VectorInt::Addition(const VectorInt& vec)
{
	return VectorInt(m_x + vec.m_x, m_y + vec.m_y);
}


double mtl::VectorInt::Module()
{
	return sqrt(m_x * m_x + m_y * m_y);
}


void mtl::VectorInt::VectorPrint()
{
	std::cout << "(" << m_x << "," << m_y<<")";
}
=======

mtl::VectorInt mtl::VectorInt::MultiplyByNum(const int num) const
{

	return VectorInt(m_x * num, m_y * num);

}

mtl::VectorInt mtl::VectorInt::DivideByNum(const int num) const
{

	return VectorInt(m_x / num, m_y / num);

}

mtl::VectorInt mtl::VectorInt::Substract(const VectorInt& vec) const
{

	return VectorInt(m_x - vec.m_x, m_y - vec.m_y);

}

mtl::VectorInt mtl::VectorInt::Invert() const
{

	return VectorInt(-m_x, -m_y);

}


>>>>>>> 62d1c18ffb31a033aaaad250c010ec62867a9617
