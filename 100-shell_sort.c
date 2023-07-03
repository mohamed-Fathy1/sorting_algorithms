#include "sort.h"


/**
 * shell_sort - function
 * @array: input
 * @size: input
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, k = 1;

	while (k < size)
		k = k * 3 + 1;

	k = (k - 1) / 3;

	while (k)
	{
		for (i = k; i < size; i++)
		{
			j = i;
			while (j >= k && array[j] < array[j - 1])
			{
				int tmp = array[j - 1];

				array[j - 1]  = array[j];
				array[j] = tmp;
				j -= k;
			}
		}
		print_array(array, size);

		k = (k - 1) / 3;
	}
}
