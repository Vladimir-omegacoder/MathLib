#include "VectorInt.h"



mtl::VectorInt mtl::VectorInt::MultiplyByNum(const int num) const
{

	return VectorInt(m_x * num, m_y * num);

}

mtl::VectorInt mtl::VectorInt::DivideByNum(const int num) const
{

	return VectorInt(m_x / num, m_y / num);

}

int mtl::VectorInt::ScalarProduct(const VectorInt& vec) const
{

	return (m_x * vec.m_x) + (m_y * vec.m_y);

}




mtl::VectorInt mtl::VectorInt::Substract(const VectorInt& vec) const
{

	return VectorInt(m_x - vec.m_x, m_y - vec.m_y);

}

mtl::VectorInt mtl::VectorInt::Addition(const VectorInt& vec) const
{

	return VectorInt(m_x + vec.m_x, m_y + vec.m_y);

}




mtl::VectorInt mtl::VectorInt::Invert() const
{

	return VectorInt(-m_x, -m_y);

}

double mtl::VectorInt::Module() const
{

	return sqrt(m_x * m_x + m_y * m_y);

}




void mtl::VectorInt::VectorPrint() const
{

	std::cout << '(' << m_x << "; " << m_y << ')';

}



mtl::VectorInt& mtl::VectorInt::operator--()
{
	
	--m_x;
	--m_y;

	return *this;

}

mtl::VectorInt mtl::VectorInt::operator--(int)
{

	VectorInt temp(*this);

	operator--();

	return temp;

}

mtl::VectorInt& mtl::VectorInt::operator++()
{

	++m_x;
	++m_y;

	return *this;

}

mtl::VectorInt& mtl::VectorInt::operator++(int)
{

	VectorInt temp(m_x, m_y);

	++(*this);

	return temp;

}



mtl::VectorInt& mtl::VectorInt::operator+=(const VectorInt& vec)
{
	
	m_x += vec.m_x;
	m_y += vec.m_y;

	return *this;

}

mtl::VectorInt& mtl::VectorInt::operator-=(const VectorInt& vec)
{

	m_x -= vec.m_x;
	m_y -= vec.m_y;

	return *this;

}

mtl::VectorInt& mtl::VectorInt::operator*=(const int k)
{

	m_x *= k;
	m_y *= k;

	return *this;

}

mtl::VectorInt& mtl::VectorInt::operator/=(const int k)
{

	m_x /= k;
	m_y /= k;

	return *this;

}



bool mtl::operator==(const VectorInt& vec1, const VectorInt& vec2)
{
	
	return vec1.m_x == vec2.m_x && vec1.m_y == vec2.m_y;

}

bool mtl::operator!=(const VectorInt& vec1, const VectorInt& vec2)
{
	return !(vec1 == vec2);
}
