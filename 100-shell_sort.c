#include "sort.h"


/**
 * shell_sort - function
 * @array: input
 * @size: input
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, k = 1;
	int tmp;

	while (k < size)
		k = k * 3 + 1;

	k = (k - 1) / 3;

	while (k)
	{
		for (i = k; i < size; i++)
		{
			j = i;

			while (j >= k && array[j] < array[j - k])
			{
				tmp = array[j];
				array[j]  = array[j - k];
				array[j - k] = tmp;
				j -= k;
			}
		}
		print_array(array, size);

		k = (k - 1) / 3;
	}
}
