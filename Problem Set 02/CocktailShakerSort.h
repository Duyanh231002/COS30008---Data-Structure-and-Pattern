#pragma once

#include "IntSorter.h" // Include IntSorter

class CocktailShakerSort : public IntSorter
{
public:
	void operator()(IntVector& aContainer) const override;
};