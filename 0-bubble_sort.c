#include "sort.h"

/**
 * bubble_sort - integers in ascending order using
 * @array: print the array
 * @size: array size
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int i;

	if (size < 2)
		return;
	for (y = 0; y < size - 1; y++)
	{
		for (x = 0; x < size - y - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				i = array[x];
				array[x] = array[x + 1];
				array[x + 1] = i;
				print_array(array, size);
			}
		}
	}
}
