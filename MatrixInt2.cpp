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



mtl::MatrixInt2 mtl::MatrixInt2::Transpose()
{

	int temp = m_matrix[1];
	m_matrix[1] = m_matrix[2];
	m_matrix[2] = temp;

	return MatrixInt2(m_matrix);

}




int mtl::MatrixInt2::Determinant()
{

	int det = m_matrix[0] * m_matrix[3] - m_matrix[1] * m_matrix[2];
	return det;

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



