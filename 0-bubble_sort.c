#include "sort.h"

/**
 * bubble_sort - function
 * @array: input
 * @size: input
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, isSorted;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		isSorted = 1;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				char temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				isSorted = 0;
			}
		}
		if (isSorted)
			return;
	}
}
