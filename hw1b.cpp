#include <iostream>
#include <cmath>

using namespace std;

class VectorDouble
{
	public:
		friend =(const Vector& vector1, const Vector& vector2);
			// copy assignment operator

		friend ==(const Vector& vector1, const Vector& vector2);
			// equivalance operator

		VectorDouble();
			// initial declaration of vector, needs to be changed to dynamic

		VectorDouble( int count );
			// constructor where size is the initial capacity of the vector

		VectorDouble( VectorDouble& copyTemplate );
			// constructor that copies the state of copyTemplate


		value_at( int i);
			// returns value of vector at index "i"

		change_value_at( double d, int i);
			// changes the value at index "i" to value "d"



	private:
		int count ;
			// count of pointers that store values

		int max_count ;
			// the size of the array

		double *contents ;
			// the pointer to the actual array
}; 

double VectorDouble::value_at( int i)
{
	return contents[i];
}

void VectorDouble::change_value_at( double d, int i)
{
	contents[i] = d;
}

double operator =( const Vector& vector1, const Vector& vector2)
{
	VectorDouble.vector1.clear();
	VectorDouble.vector1 = VectorDouble.vector2;
	return VectorDouble.vector1;
}

bool operator ==( const Vector& vector1, const Vector& vector2)
{
	return (VectorDouble.vector1 == VectorDouble.vector2);
}