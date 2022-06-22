#include "sort.h"

/**
 * selection_sort - array of integers in ascending order
 * @array: sort array
 * @size: size array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, x, m;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		m = i;
		for (x = i + 1; x < size; x++)
		{
			if (array[x] < array[m])
				m = x;
		}
		if (i != m)
		{
			tmp = array[i];
			array[i] = array[m];
			array[m] = tmp;
			print_array(array, size);
		}
	}
}
