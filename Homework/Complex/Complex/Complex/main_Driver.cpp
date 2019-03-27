#include<iostream>
#include"Complex.h"

int main()
{
	using std::cout;

	Complex A(2, 4);
	Complex B(1, 2);

	Complex C = B.add(A);
	cout << C << "i";

	return 0;
}