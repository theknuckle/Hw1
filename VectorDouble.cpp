#include <iostream>
#include <cmath>
#include <algorithm>	// std::min()

#include "VectorDouble.h"


VectorDouble::VectorDouble()
{
		contents = new double[50];
		this->max_count = 50;
		this->count = 0;

		for ( int i = 0; i < max_count; i++ )
        {
            contents[i] = 0;
        }
}

VectorDouble::VectorDouble( int capacity )
{
		contents = new double[capacity];
		this->max_count = capacity;
		this->count = 0;

		for ( int i = 0; i < max_count; i++ )
        {
            contents[i] = 0;
        }
}

VectorDouble::VectorDouble( VectorDouble& copyTemplate )
{
		contents = new double[copyTemplate.capacity()];
		this->max_count = copyTemplate.capacity();

		for ( int i = 0; i < max_count; i++ )
		{
		    if ( i < copyTemplate.size() )
            {
                contents[i] = copyTemplate.value_at(i);
            }
            else
            {
                contents[i] = 0;
            }

		}

		this->count = copyTemplate.size();
}

VectorDouble::~VectorDouble()
{
	delete [] contents;
}

bool VectorDouble::operator==( const VectorDouble& Vector1 )
{
	if ( this->count != Vector1.size() )
	{
		return false;
	}

	for ( int i = 0; i < Vector1.size(); i++ )
	{
		if ( this->contents[i] != Vector1.contents[i] )
		{
			return false;
		}
	}

	return true;
}

double VectorDouble::value_at( int i) const
{
	return contents[i];
}

void VectorDouble::change_value_at( double d, int i)
{
    if ( i > max_count )
    {
        return;
    }

	contents[i] = d;
	if ( i > this->count )
    {
        this->count = i;
    }
}

void VectorDouble::push_back( double appendage )
{
	if ( this->max_count == this->count )
	{
		this->resize( max_count + 1 );
	}
	count++;
	this->contents[count] = appendage;
}

void VectorDouble::pop_back()
{
    contents[count] = 0;
	count--;
}

int VectorDouble::capacity() const
{
	return max_count;
}

int VectorDouble::size() const
{
	return this->count;
}

void VectorDouble::reserve( int minSize )
{
	if ( this->max_count >= minSize )
	{
		return;
	}
	else
	{
		this->max_count = minSize;
	}
}

void VectorDouble::resize( int size )
{
	double* newArray = new double[size];

	for ( int i = 0; i < size; i++ )
	{
        if ( i < this->count )
        {
            newArray[i] = this->contents[i];
        }
        else
        {
            newArray[i] = 0.0;
        }

	}

	if ( this->max_count <= size )
	{
		this->reserve(size);
	}
	
	this->count = size;
	delete [] contents;
	contents = newArray;

}

// private
void VectorDouble::clear()
{
	this->count = 0;
}
