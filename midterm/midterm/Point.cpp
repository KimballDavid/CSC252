#include <cmath>
#include "Point.h"


namespace midterm
{
	Point::Point()
	{
	}

	Point::Point(double x, double y)
		:m_x(x), m_y(y)
	{
	}

	Point::~Point()
	{ 
	}


	// getters or accessors
	double Point::getx() const
	{
		return m_x;
	}

	double Point::gety() const
	{
		return m_y;
	}

	// mutators or setters
	void Point::setx(double x)
	{
		m_x = x;
	}

	void Point::sety(double y)
	{
		m_y = y;
	}

	double Point::distanceTo(const Point& other)
	{
		double tx = m_x - other.getx();
		double ty = m_y - other.gety();
		return sqrt(tx*tx + ty * ty);
	}

}