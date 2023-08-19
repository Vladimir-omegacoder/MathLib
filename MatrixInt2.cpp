#include "MatrixInt2.h"



mtl::MatrixInt2::MatrixInt2(int matrix[4])
{

	if (matrix)
	{

		for (int i = 0; i < 4; ++i)
		{

			m_matrix[i] = matrix[i];

		}

	}

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



