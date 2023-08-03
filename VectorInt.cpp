#include "VectorInt.h"


                                /* a * b | a / b */
//////////////////////////////////////////////////////////////////////////////////////

mtl::VectorInt mtl::VectorInt::MultiplyByNum(const int num) const
{

	return VectorInt(m_x * num, m_y * num);

}

mtl::VectorInt mtl::VectorInt::DivideByNum(const int num) const
{

	return VectorInt(m_x / num, m_y / num);

}

int mtl::VectorInt::ScalarProduct(const VectorInt& vec) 
{

	return (m_x * vec.m_x) + (m_y * vec.m_y);

}


                                 /*  a + b | a - b */
//////////////////////////////////////////////////////////////////////////////////////


mtl::VectorInt mtl::VectorInt::Substract(const VectorInt& vec) const
{

	return VectorInt(m_x - vec.m_x, m_y - vec.m_y);

}

mtl::VectorInt mtl::VectorInt::Addition(const VectorInt& vec)
{

	return VectorInt(m_x + vec.m_x, m_y + vec.m_y);

}


                                      /* Modul | Invert*/
//////////////////////////////////////////////////////////////////////////////////////


mtl::VectorInt mtl::VectorInt::Invert() const
{

	return VectorInt(-m_x, -m_y);

}

double mtl::VectorInt::Module()
{

	return sqrt(m_x * m_x + m_y * m_y);

}


                                           /* <<a */
//////////////////////////////////////////////////////////////////////////////////////


void mtl::VectorInt::VectorPrint()
{
	std::cout << "(" << m_x << "," << m_y<<")";
}


