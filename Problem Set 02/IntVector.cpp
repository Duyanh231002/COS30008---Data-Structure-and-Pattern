// COS30008 - Ha Duy Anh - 103428029 - Problem Set 2

#include <iostream>
#include "IntVector.h" // Include IntVector

using namespace std;

IntVector::IntVector(const int aArrayOfIntegers[], size_t aNumberOfElements)
{
	fNumberOfElements = aNumberOfElements;
	fElements = new int[fNumberOfElements];

	for (size_t x = 0; x < fNumberOfElements; x++)
	{
		fElements[x] = aArrayOfIntegers[x];
	}
}

IntVector::~IntVector()
{
	delete fElements;
}

size_t IntVector::size()
const {
	return fNumberOfElements;
}

void IntVector::swap(size_t aSourceIndex, size_t aTargetIndex) {
	if (aSourceIndex == aTargetIndex) // Check with conditions to print out error messages
	{
		throw out_of_range("Cannot swap the same index!"); 
	}

	if (aSourceIndex >= fNumberOfElements) 
	{
		throw out_of_range("Illegal Index To Source Vector.");
	}

	if (aTargetIndex >= fNumberOfElements) 
	{
		throw out_of_range("Illegal Index To Target Vector.");
	}

	int lBuffer = fElements[aSourceIndex];
	fElements[aSourceIndex] = fElements[aTargetIndex];
	fElements[aTargetIndex] = lBuffer;
}

void IntVector::sort(const IntSorter& aSorter) 
{
	aSorter(*this);
}

const int IntVector::operator[](size_t aIndex)
const {
	if (aIndex < 0 || aIndex >= fNumberOfElements) 
	{
		throw out_of_range("Illegal Index To Vector.");
	}

	return fElements[aIndex];
}

IntVectorIterator IntVector::begin() 
const {
	return IntVectorIterator(*this);
}

IntVectorIterator IntVector::end() 
const {
	return IntVectorIterator(*this, size());
}