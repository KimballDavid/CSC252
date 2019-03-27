#pragma once
#include<iostream>

class myPoint
{

public:
	myPoint();
	myPoint(double, double);
	~myPoint();

	// behavior
	double pointDistance(myPoint);

	double getX();
	double getY();

private:

	//attribute of myPoint
	double x_point = 0.0;
	double y_point = 0.0;
};

