#pragma once
#include <iostream>
#include <cmath>

namespace mtl 
{





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



		static int ScalarProduct(const VectorInt& vec1, const VectorInt& vec2);

		double Module() const;



		VectorInt operator+() const;

		VectorInt operator-() const;



		VectorInt& operator--();

		VectorInt operator--(int);


		VectorInt& operator++();

		VectorInt operator++(int);



		VectorInt& operator+=(const VectorInt& vec);
		
		VectorInt& operator-=(const VectorInt& vec);


		VectorInt& operator*=(const int k);

		VectorInt& operator/=(const int k);



		friend bool operator==(const VectorInt& vec1, const VectorInt& vec2);

		friend bool operator!=(const VectorInt& vec1, const VectorInt& vec2);



		friend std::ostream& operator<<(std::ostream& out, const VectorInt& vec);

		friend std::istream& operator>>(std::istream& in, VectorInt& vec);


		//TODO:
		//1. Operators to overload
		// -----------------
		// a + b	CHANGE
		// a - b	CHANGE
		// -a		CHANGE
		// +a		CHANGE
		// a * k	CHANGE
		// a / k	CHANGE
		// << a		ADD
		// -----------------
		// a * b(skalar and vector) Static method maybe?
		// 

		//DONE
		// 
		// ++a (a++)
		// --a (a--)
		// a += b
		// a -= b
		// a *= k
		// a /= k
		// a == b
		// a != b
		// 
		// Vector modulus.
		//

	};



	VectorInt operator+(const VectorInt& vec1, const VectorInt& vec2);

	VectorInt operator-(const VectorInt& vec1, const VectorInt& vec2);



	VectorInt operator*(const VectorInt& vec, const double k);

	VectorInt operator*(const double k, const VectorInt& vec);


	VectorInt operator/(const VectorInt& vec, const double k);





}