#include "Complex.h"
using std::cout;

Complex::Complex()
{
}
Complex::Complex(double real, double imaginary)
{
	rNum = real;
	iNum = imaginary;
}
Complex::~Complex()
{
}

double Complex::getReal() const
{
	return rNum;
}
double Complex::getImaginary() const
{
	return iNum;
}

Complex Complex::add(const Complex& Complex2) const
{
	double r = rNum + Complex2.getReal();
	double i = iNum + Complex2.getImaginary();
	return Complex(r, i);
}
Complex Complex::subtract(const Complex& Complex2) const
{
	double r = rNum - Complex2.getReal();
	double i = iNum - Complex2.getImaginary();
	return Complex(r, i);
}
Complex Complex::multiply(const Complex& Complex2) const
{
	double r = rNum * Complex2.getReal() - iNum * Complex2.getImaginary();
	double i = iNum * Complex2.getReal() + rNum * Complex2.getImaginary();
	return Complex(r, i);
}
Complex Complex::divide(const Complex& Complex2) const
{
	// real number portion

	double r = rNum * Complex2.getReal() + iNum * Complex2.getImaginary() 
		/ Complex2.getReal() * Complex2.getReal();

	// plus // imaginary number portion
	double i = - rNum * Complex2.getImaginary() + iNum * Complex2.getReal() 
		/ Complex2.getImaginary() * Complex2.getImaginary();
	
	return Complex(r, i);
} 
// this will break

// equate and compare
int Complex::compareTo(const Complex& Complex2) const
{
	// how do you compare both real and imaginary number sections???
	Complex temp = subtract(Complex2);
	if (temp.getReal() < 0 && temp.getImaginary() < 0)
		return -1;
	else if (temp.getReal() == 0 && temp.getImaginary() == 0)
		return 0;
	else
		return 1;
}

Complex Complex::equals(const Complex& Complex2) const
{
	Complex temp = Complex2;
	return temp;
}

Complex Complex::operator=(const Complex& Complex2)
{
	return equals(Complex2);
}

bool Complex::operator!=(const Complex& Complex2)
{
	int temp = compareTo(Complex2);
	if (temp == 0)
	{
		return false;
	}
	else
		return true;
}
 

// arithmetic operators
Complex operator+(const Complex& c1, const Complex& c2)
{
	return c1.add(c2);
}

Complex operator-(const Complex& c1, const Complex& c2)
{
	return c1.subtract(c2);
}

Complex operator*(const Complex& c1, const Complex& c2)
{
	return c1.multiply(c2);
}

Complex operator/(const Complex& c1, const Complex& c2)
{
	return c1.divide(c2);
}

// input / output operators
ostream& operator<<(ostream& out, const Complex& complex)
{
	out << complex.getReal() << " + " << complex.getImaginary();

	return out;
}
istream& operator>>(istream& in, Complex& complex)
{
	cout << "Enter real portion of complex number: ";
	in >> complex.rNum;
	cout << "Enter imaginary portion of complex number: ";
	in >> complex.iNum;

	return in;
}