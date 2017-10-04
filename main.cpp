#include <iostream>
#include "VectorDouble.h"
#include "VectorDouble.cpp"



int main()
{
    int userElements = 0;
    VectorDouble UserVector;
    double temp = 0.0;

	std::cout << "creating an array of size 3 with values 10, 15, and 20" << std::endl;

	VectorDouble Vector1(3);
	Vector1.change_value_at( 10 , 0 );
	Vector1.change_value_at( 15 , 1 );
	Vector1.change_value_at( 20 , 2 );
	std::cout << "value at position 0 in vector is " << Vector1.value_at(0) << std::endl;
	std::cout << "value at position 1 in vector is " << Vector1.value_at(1) << std::endl;
	std::cout << "value at position 2 in vector is " << Vector1.value_at(2) << std::endl;
	std::cout << "capacity of vector is" << Vector1.capacity() << std::endl << std::endl;


	std::cout << "class can also push back" << std::endl;
	Vector1.push_back( 21 );
	std::cout << "value at position 3 is " << Vector1.value_at(3) << std::endl;
	std::cout << "capacity of vector is " << Vector1.capacity() << std::endl;
	std::cout << "size of vector is " << Vector1.size() << std::endl << std::endl;


	std::cout << "vector can be resized" << std::endl;
	Vector1.resize( 5 );
	std::cout << "size of vector is " << Vector1.size() << std::endl << std::endl;


	std::cout << "vector capacity can be changed too " << std::endl;
	std::cout << "reserving 100 slots" << std::endl;
	Vector1.reserve(100);
	std::cout << "capacity of vector is " << Vector1.capacity() << std::endl << std::endl;


	std::cout << "let's declare a new vector with the copy constructor" << std::endl;
	VectorDouble Vector2( Vector1 );
	std::cout << "It has size " << Vector2.size() << std::endl;
	std::cout << "Whereas Vector1 has size " << Vector1.size() << std::endl;
	std::cout << "It has values" << std::endl;
	for ( int i = 0; i < Vector2.size(); i++ )
    {
        std::cout << Vector2.value_at(i) << std::endl;
    }

    if ( Vector2 == Vector1 )
    {
        std::cout << "Vector1 and Vector2 are equal" << std::endl;
    }
    else
    {
        std::cout << "Vector1 and Vector2 are not equal" << std::endl;
    }
    std::cout << "But when we change the element 0 of Vector2 to 100" << std::endl;
    Vector2.change_value_at( 100, 0 );
    if ( Vector2 == Vector1 )
    {
        std::cout << "Vector1 and Vector2 are equal" << std::endl;
    }
    else
    {
        std::cout << "Vector1 and Vector2 are not equal" << std::endl;
    }
    std::cout << std::endl;




	std::cout << "please enter number of elements you would like to input" << std::endl;
	std::cin >> userElements;

	UserVector.resize( userElements );

	std::cout << "enter the elements, after each element please press enter " << std::endl;

	for ( int i = 0; i < userElements; i++ )
	{
		std::cin >> temp;
		if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore( 1000, '\n' );
            std::cout << "Whoops, looks like that was an invalid character :p Try again" << std::endl;
            i--;
            continue;
        }
		UserVector.change_value_at( temp , i );

	}

	std::cout << "displaying vector contents: " << std::endl;


	for ( int i = 0; i < userElements; i++ )
	{
		std::cout << UserVector.value_at(i) << std::endl;
	}


	return 0;
}
