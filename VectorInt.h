#pragma once


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

		VectorInt Substract(const VectorInt& vec) const;

		VectorInt Invert() const;

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
		// Vector modulus.
		// 

	};





}