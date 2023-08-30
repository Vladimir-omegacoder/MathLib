#pragma once
#include <initializer_list>
#include <iostream>
#include <exception>






namespace mtl 
{

	typedef std::initializer_list<int> int_init_t;


	


	class MatrixInt2
	{

	private:


		int m_matrix[4]{};

		
	public:

		MatrixInt2() {};

		MatrixInt2(const int (*arr)[4]);

		MatrixInt2(const int (*matrix)[2][2]);

		MatrixInt2(const int_init_t arr); //Int init_list, which must be a size of 4

		MatrixInt2(const std::initializer_list<const int_init_t> matrix); //Int init_list, which must consist of 2 init_lists, that have 2 elements

		



		MatrixInt2 Transpose();



		int operator() (int row, int col) const;

		int& operator() (int row, int col);



		friend std::ostream& operator<<(std::ostream& out, const MatrixInt2& matrix);

	};





}