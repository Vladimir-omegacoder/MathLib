#pragma once
#include <iostream>
#include <cmath>

namespace mtl {





	class VectorInt 
	{

	private:


		int m_x;
		int m_y;


	public:


		VectorInt(int x = 0, int y = 0) 
		 : m_x(x), m_y(y) {}



		int GetX() const { return m_x; }
		int GetY() const { return m_y; }

		void SetX(int x) { m_x = x; }
		void SetY(int y) { m_y = y; }



		VectorInt MultiplyByNum(const int num) const;

		VectorInt DivideByNum(const int num) const;

		int ScalarProduct(const VectorInt& vec);



		VectorInt Substract(const VectorInt& vec) const;

		VectorInt Addition(const VectorInt& vec);



		VectorInt Invert() const;

		double Module();



		void VectorPrint();


		//TODO:
		//1. Operators overload: 
		// a + b
		// a - b
		// -a
		// a * k
		// a / k
		// a * b(skalar and vector)
		// << a
		//2. Methods for operators. 
		//3. Vector modulus.
		// 	

	};





}