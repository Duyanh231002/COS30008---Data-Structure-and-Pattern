// COS30008 - Ha Duy Anh - 103428029 - Problem Set 2


#include "CocktailShakerSort.h" // Include CocktailShakerSort
#include "IntVector.h" // Include IntVector

void CocktailShakerSort::operator()(IntVector& aContainer)
const {
	int beginIndex = 0;
	int endIndex = aContainer.size() - 1;

	while (beginIndex < endIndex)
	{
		for (int i = endIndex; i >= beginIndex + 1; i--)
		{
			if (aContainer[i] < aContainer[i - 1])
			{
				aContainer.swap(i, i - 1);
			}
		}
		beginIndex++;

		for (int i = beginIndex; i <= endIndex - 1; i++)
		{
			if (aContainer[i] > aContainer[i + 1])
			{
				aContainer.swap(i, i + 1);
			}
		}
		endIndex--;
	}
}