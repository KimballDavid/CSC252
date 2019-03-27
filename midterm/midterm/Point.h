#pragma once

namespace midterm
{
	class Point
	{
	public:
		// no arg ctor
		Point();
		// ctor that takes co-ords
		Point(double, double);
		// dtor
		~Point();

		// getters or accessors
		double getx() const;
		double gety() const;

		// mutators or setters
		void setx(double);
		void sety(double);

		double distanceTo(const Point& other);

	private:
		double m_x = 0.0;
		double m_y = 0.0;

	};

}

