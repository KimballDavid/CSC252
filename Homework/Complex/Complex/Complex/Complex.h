#ifndef COMPLESNUMBERS_H
#define COMPLEXNUMBERS_H
#include<iostream>
#include<string>
using std::ostream;
using std::istream;

class Complex
{
public:
	Complex();
	Complex(double, double);
	~Complex();
	
	Complex add(const Complex& Complex2) const;
	Complex subtract(const Complex& Complex2) const;
	Complex multiply(const Complex& Complex2) const;
	Complex divide(const Complex& Complex2) const;

	int compareTo(const Complex& Complex2) const;
	Complex equals(const Complex& Complex2) const;


	// input/output operators
	friend ostream& operator<<(ostream&, const Complex&);
	friend istream& operator>>(istream&, Complex&);
	
	// relational operators // need to fix // Ask Sam

	Complex operator=(const Complex& Complex2);
	bool operator!=(const Complex& Complex2);

private:
	// members
	double rNum = 0.0;
	double iNum = 0.0;

	// getters
	double getReal() const;
	double getImaginary() const;
	
};

	// arithmetic operators
	Complex operator+(const Complex& c1, const Complex& c2);
	Complex operator-(const Complex& c1, const Complex& c2);
	Complex operator*(const Complex& c1, const Complex& c2);
	Complex operator/(const Complex& c1, const Complex& c2);
#endif