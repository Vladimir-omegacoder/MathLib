#pragma once
#include <initializer_list>





namespace mtl 
{





	class MatrixInt2
	{

	private:


		int m_matrix[4]{};

		
	public:


		//Temporary solution
		MatrixInt2(int matrix[4] = nullptr);



		int operator() (int row, int col) const;

		int& operator() (int row, int col);



	};





}