#include"Vector.h"
#include<iostream>


// I am leavving the code for the try and catch along with the errors in the project
// however I will not be using it in my submission because it seems to be causing an issue in my code
// that I can't figure out, but I wanted to show my attempt at it
int main()
{
	using std::cout;
	using CSC252HW2::Vector;
	
	/*try
	{*/
		// create vectors to manipulate
		Vector<int> vI1(10, 30);
		Vector<int> vI2(10, 22);
		Vector<double> v2(15, 7.86);

		// test size
		unsigned thesize = v2.size();
		cout << thesize;
		bool empty = vI1.empty();


		// test pushback on vector vI1
		vI1.pushback(8);
		cout << vI1.at(2); // first test of at()
		vI1.pushback(9);
		vI1.pushback(7);
		vI1.pushback(6);
		vI1.pushback(5);
		vI1.pushback(4);
		vI1.pushback(3);

		vI1.swap(vI2, vI1); // test swap function
	

		vI1.popback();// test remove fucntion popback()
		vI1.popback();
		vI1.popback();
		vI1.popback();
		cout << vI1.at(2); 

		// it works - int exceptionTest1 = vI1.at(7); // exception test of at()
		for (int x = 1; x < 10; x++)
		{
			vI1.pushback(6);
		}

		vI1.clear();
		/*}

	catch (std::runtime_error& theExcept)
	{
		cout << "std::runtime_error caught " << theExcept.what() << "\n";
	}
	catch (...)
	{
		cout << "bad stuff the boss \n";
	}*/
	return 0;
}