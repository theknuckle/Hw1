#include <iostream>
#include <cmath>
#include <algorithm>	// std::min()


VectorDouble::VectorDouble()
{
		contents = new int[50];
		this->max_count = 50;
		this->count = 0;
}

VectorDouble::VectorDouble( int capacity )
{
		contents = new int[capacity];
		this->max_count = capacity;
		this->count = 0;
}

VectorDouble::VectorDouble( VectorDouble& copyTemplate )
{
		contents = new int[copyTemplate.capacity()];
		this->max_count = copyTemplate.capacity();

		for ( int i = 0; i < copyTemplate.size(); i++ )
		{
			contents[i] = copyTemplate.value_at(i);
		}

		this->count = copyTempalate.size();
}

VectorDouble::~VectorDouble()
{
	delete [] contents;
}

friend void operator =( const Vector& Vector1, const Vector& Vector2)
{
	if ( Vector1.capacity() < Vector2.size() )
	{
		Vector1.resize( Vector2.count )
	}

	Vector1.clear();
	for ( int i = 0; i < Vector2.count; i++ )
	{
		Vector1.contents[i] = Vector2.contents[i];
	}
	Vector1.count = Vector2.count;
}

friend bool operator ==( const Vector& vector1, const Vector& vector2)
{
	if ( Vector1.count != Vector2.count )
	{
		return false;
	}

	for ( int i = 0; i < Vector1.count; i++ )
	{
		if ( Vector1.countents[i] != Vector2.contents[i] )
		{
			return false;
		}
	}

	return true;
}

double VectorDouble::value_at( int i)
{
	return contents[i];
}

void VectorDouble::change_value_at( double d, int i)
{
	contents[i] = d;
}

void VectorDouble::push_back( double appendage )
{
	if ( this->max_count == this->count )
	{
		this->resize( max_count + 1 );
	}
	this->contents[count+1] = appendage;
	count++;
}

void VectorDouble::pop_back()
{
	count--;
}

int VectorDouble::capacity()
{
	return max_count;
}

int VectorDouble::size()
{
	return count;
}

void VectorDouble::reserve( int minSize )
{
	if ( this->max_count >= minSize )
	{
		return;
	}
	else
	{
		this->resize( minSize );
	}
}

void VectorDouble::resize( int size );
{
	int* newArray = new int [size];

	for ( int i = 0; std::min(size, this->count); i++ )
	{
		newArray[i] = this->contents[i];
	}

	this->max_count = size;
	this->count = min( this->max_count, this->size );
	delete [] contents;
	contents = newArray;

}

// private
void VectorDouble::clear();
{
	this->count = 0;
}