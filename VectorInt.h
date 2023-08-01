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



		int GetX() { return m_x; }
		int GetY() { return m_y; }

		void SetX(int x) { m_x = x; }
		void SetY(int y) { m_y = y; }

		//TODO...

	};





}