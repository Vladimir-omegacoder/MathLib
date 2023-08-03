#include "VectorInt.h"


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
