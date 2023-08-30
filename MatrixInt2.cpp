#include "MatrixInt2.h"







mtl::MatrixInt2::MatrixInt2(const int (*arr)[4])
{

	if (arr != nullptr && *arr != nullptr)
	{

		(*this)(0, 0) = (*arr)[0];
		(*this)(0, 1) = (*arr)[1];

		(*this)(1, 0) = (*arr)[2];
		(*this)(1, 1) = (*arr)[3];

	}

}

mtl::MatrixInt2::MatrixInt2(const int (*matrix)[2][2])
{

	if (matrix != nullptr && *matrix != nullptr)
	{

		if (matrix[0] != nullptr)
		{
			(*this)(0, 0) = (*matrix)[0][0];
			(*this)(0, 1) = (*matrix)[0][1];
		}

		if (matrix[1] != nullptr)
		{
			(*this)(1, 0) = (*matrix)[1][0];
			(*this)(1, 1) = (*matrix)[1][1];
		}

	}

}

mtl::MatrixInt2::MatrixInt2(const int_init_t arr)
{

	if (arr.size() != 4) 
	{

		throw;

	}


	int_init_t::const_iterator it = arr.begin();

	(*this)(0, 0) = *(it++);
	(*this)(0, 1) = *(it++);
	(*this)(1, 0) = *(it++);
	(*this)(1, 1) = *(it++);

}

mtl::MatrixInt2::MatrixInt2(const std::initializer_list<const int_init_t> matrix)
{

	if (matrix.size() != 2 || matrix.begin()->size() != 2 || (matrix.begin()+1)->size() != 2)
	{

		throw;

	}


	std::initializer_list<const int_init_t>::const_iterator it1 = matrix.begin();

	int_init_t::const_iterator it2 = it1->begin();


	(*this)(0, 0) = *(it2++);
	(*this)(0, 1) = *(it2++);

	it2 = (++it1)->begin();

	(*this)(1, 0) = *(it2++);
	(*this)(1, 1) = *(it2++);

}



mtl::MatrixInt2 mtl::MatrixInt2::Transpose()
{

	int temp = m_matrix[1];
	m_matrix[1] = m_matrix[2];
	m_matrix[2] = temp;

	return MatrixInt2(&m_matrix);

}



int mtl::MatrixInt2::operator()(int row, int col) const
{

	return m_matrix[row * 2 + col];

}

int& mtl::MatrixInt2::operator()(int row, int col)
{

	return m_matrix[row * 2 + col];

}



std::ostream& mtl::operator<<(std::ostream& out, const MatrixInt2& matrix)
{

	for (int i = 0; i < 2; ++i)
	{

		for (int j = 0; j < 2; ++j)
		{

			out << matrix(i, j) << '\t';

		}

		out << '\n';

	}

	return out;

}



