#include "LineSeg.h"

namespace midterm
{
	// add code here for 
	// ctors and dtors etc

	LineSeg::LineSeg(const Point& point1, const Point& point2)
	{
		m_pta = point1;
		m_ptb = point2;
	}
	LineSeg::~LineSeg()
	{
	}


	double LineSeg::getX() const
	{
		return m_ptb.getx();
	}

	double LineSeg::getY() const
	{	
		return m_ptb.gety();
	}
	void LineSeg::setP1(Point point)
	{
		m_pta = point;
	}
	void LineSeg::setP2(Point point)
	{
		m_ptb = point;
	}



}
