//This is the VectorDouble.h
#ifndef VECTOR_DOUBLE_H
#define VECTOR_DOUBLE_H

class VectorDouble
{
	public:
		friend void =(const Vector& vector1, const Vector& vector2);
			// copy assignment operator

		friend bool ==(const Vector& vector1, const Vector& vector2);
			// equivalance operator

		VectorDouble();
			// initial declaration of vector, needs to be changed to dynamic

		VectorDouble( int count );
			// constructor where size is the initial capacity of the vector

		VectorDouble( VectorDouble& copyTemplate );
			// constructor that copies the state of copyTemplate

		~VectorDouble();
			// destructor (of worlds)

		double value_at( int i);
			// returns value of vector at index "i"

		void change_value_at( double d, int i);
			// changes the value at index "i" to value "d"

		void push_back( double appendage );
			// appends value to the end of the array

		void pop_back();
			// removes the last value of the array

		int capacity();
			// returns allocated memory capacity

		int size();
			// returns number of assigned values

		void reserve( int minSize );
			// will ensure that enough memory is allocated
			// for at least minSize elements

		void resize( int size );
			// changes capacity to size and removes elements that don't fit


	private:
		int count;
			// the number of assigned values in the array

		int Max_count;
			// the size of the array

		double *contents;
			// the pointer to the actual array

		void clear();
			// clears all the elements of the vector
}; 


#endif //VECTOR_DOUBLE_H