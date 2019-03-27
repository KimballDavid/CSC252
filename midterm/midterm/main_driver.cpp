#include<iostream>
#include"Point.h"
#include"LineSeg.h"

int main()
{
	using std::cout;
	// enter your code here
	using namespace midterm;

	// Creating Point objects
	Point p1(1.1, 2.1);
	Point p2(3.5, 4.2);
	Point p3(0.7, 10.2);
	Point p4(9.0, 7.8);
	// creating LineSeg objects
	LineSeg lss(p1, p2);
	
	// create Line Segment pointer
	LineSeg *plsh = new LineSeg(p3, p4);

	// get function

	cout << lss.getX() << "\n";
	cout << lss.getY() << "\n";
	cout << plsh->getX() << "\n";
	cout << plsh->getY() << "\n";

	delete plsh;

	return 0;
}