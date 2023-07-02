#include "sort.h"



/**
 * swap - function
 * @array: input
 * @i: input
 * @j: input
 */
void swap(int *array, int i, int j)
{
	int tmp = array[i];

	array[i] = array[j];
	array[j] = tmp;
}


/**
 * partition - function
 * @array: input
 * @low: input
 * @high: input
 * @size: input
 * Return: int
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int j, i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
			i++;
		}
	}

	if (array[high] != array[i])
	{
		swap(array, high, i);
		print_array(array, size);
	}

	return (i);
}

/**
 * qs - function
 * @array: input
 * @low: input
 * @high: input
 * @size: input
 */
void qs(int *array, int low, int high, size_t size)
{
	int pivot;

	if (high <= low)
		return;

	pivot = partition(array, low, high, size);
	qs(array, low, pivot - 1, size);
	qs(array, pivot + 1, high, size);
}



/**
 * quick_sort - function
 * @array: input
 * @size: input
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	qs(array, 0, size - 1, size);
}
