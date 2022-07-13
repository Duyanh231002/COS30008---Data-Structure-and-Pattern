#pragma once

#include <cstddef> // include for size_t (unsigned integral type)

#include "IntSorter.h" // include basic sorter definition

#include "IntVectorIterator.h" // include iterator definition

class IntVector
{
private:
	int* fElements;
	size_t fNumberOfElements;

public:
	
	IntVector(const int aArrayOfIntegers[], size_t aNumberOfElements); // Constructor
	~IntVector(); // Destructor

	size_t size() const; // size getter

	void swap(size_t aSourceIndex, size_t aTargetIndex); // swap two elements within the vector
	void sort(const IntSorter& aSorter); // sort receives a callable Sorter object

	const int operator[](size_t aIndex) const; // indexer

	// iterator auxiliary methods (required for C++11 for-range loop)
	IntVectorIterator begin() const;
	IntVectorIterator end() const;
};
