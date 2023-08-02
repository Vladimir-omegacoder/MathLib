#include "VectorInt.h"



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


