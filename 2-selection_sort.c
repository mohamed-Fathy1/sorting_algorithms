#include "sort.h"


/**
 * selection_sort - function
 * @array: input
 * @size: input
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		size_t Min_ind = i;

		for (j = i + 1; j < size; j++)
			if (array[Min_ind] > array[j])
				Min_ind = j;

		if (Min_ind != i)
		{
			int tmp = array[Min_ind];

			array[Min_ind] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}

}
