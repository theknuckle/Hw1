#include <iostream>
#include "VectorDouble.h"

int userElements = 0;
VectorDouble uservector;
double temp = 0;



int main()
{
	cout << "creating an array of 3 with values of 10 15 and 20" << endl;

	VectorDouble vector1(3);
	vector1.change_value_at( 10 , 0 );
	vector1.change_value_at( 15 , 1 );
	vector1.change_value_at( 20 , 2 );

	cout << "value at position 0 in vector is " << vector1.value_at(0) << endl;
	cout << "value at position 1 in vector is " << vector1.value_at(1) << endl;
	cout << "value at position 2 in vector is " << vector1.value_at(2) << endl;


	cout << "class can also push back" << endl;

	vector1.push_back( 21 );

	cout << "value at position 3 is " << vector1.value_at(3) << endl;

	cout << "capacity of vector is " << vector1.capacity() << endl;

	cout << "size of vector is " << vector1.size() << endl;

	cout << "vector can be resized" << endl;

	vector1.resize( 5 );

	cout << "size of vector is " << vector1.size() << endl;

	cout << "vector capacity can be changed too " << endl;

	vector1.reserve(100);

	cout << "capacity of vector is " << vector1.capacity << endl;

	cout << "please enter number of elements you would like to input" << endl;

	cin >> userElements;

	uservector.resize(userElements);

	cout << "enter the elements, after each element please press enter " << endl;

	for (int i = 0, i < elements, i++)
	{
		cin >> temp;
		uservector.change_value_at( temp , i )

	}

	cout << "displaying vector contents " << endl;


	for (int i = 0, i < elements, i++)
	{
		cout << uservector.value_at(i);
	}

	
	return 0;
}
