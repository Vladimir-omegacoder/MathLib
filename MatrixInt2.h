#pragma once
#include <initializer_list>
#include <iostream>





namespace mtl 
{





	class MatrixInt2
	{

	private:


		int m_matrix[4]{};

		
	public:


		//Temporary solution
		MatrixInt2(int matrix[4] = nullptr);



		MatrixInt2 Transpose();



		int operator() (int row, int col) const;

		int& operator() (int row, int col);



		friend std::ostream& operator<<(std::ostream& out, const MatrixInt2& matrix);

	};





}