#include"myPoint.h"

myPoint::myPoint()
{
	double x = 0.0;
	double y = 0.0;
}
myPoint::myPoint(double x, double y)
{
	x_point = x;
	y_point = y;
}
myPoint::~myPoint()
{
}
// fucntion to calcultate distant between points
// (0,0) and (10,30.5)
double myPoint::pointDistance(myPoint point2)
{
	using std::cout;

	double distance = 0.0;
	
	distance = sqrt(pow(x_point-point2.getX(), 2) + pow(y_point - point2.getY(), 2));
	cout << distance;
	return distance;
}
// use function to get the Y value
double myPoint::getY()
{

	return y_point;
}
// use function to get the X value
double myPoint::getX()
{

	return x_point;
}