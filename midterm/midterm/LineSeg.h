#pragma once
#include"Point.h"

namespace midterm
{

	class LineSeg
	{
	public:
		// fill in your code here
		LineSeg(const Point&, const Point&);
		~LineSeg();
		double getX() const;
		double getY() const;
		void setP1(Point);
		void setP2(Point);
	
	private:
		Point m_pta;
		Point m_ptb;
		LineSeg();
	};

}

