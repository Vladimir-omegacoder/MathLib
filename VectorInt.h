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

		int ScalarProduct(const VectorInt& vec) const;



		VectorInt Substract(const VectorInt& vec) const;

		VectorInt Addition(const VectorInt& vec) const;



		VectorInt Invert() const;

		double Module() const;



		void VectorPrint() const;



		VectorInt& operator--();

		VectorInt operator--(int);



		VectorInt& operator+=(const VectorInt& vec);

		VectorInt& operator/=(const int k);



		friend bool operator==(const VectorInt& vec1, const VectorInt& vec2);

		//TODO:
		//1. Operators to overload: 
		// a + b
		// a - b
		// -a
		// +a
		// a * k
		// a / k
		// a * b(skalar and vector) Method maybe?
		// << a
		// ++a (a++)
		// --a (a--)
		// a += b
		// a -= b
		// a *= k
		// a /= k
		// a == b
		// a != b
		// 
		//2. Methods for operators. 
		//3. Vector modulus.
		// 	

	};





}