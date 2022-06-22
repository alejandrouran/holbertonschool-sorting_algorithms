#include "sort.h"

/**
 * quick_sort - array of integers in ascending order
 * @array: array
 * @size: array size
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	unsigned int i, x, p, tmp;
	unsigned int f = array[0];
	unsigned int l = array[size - 1];

	if (size >= 2)
	{
		if (f < l)
		{
			p = f;
			i = f;
			x = l;

			while (i < x)
			{
				while (array[i] <= array[p] && i < l)
					i++;
				while (array[x] > array[p])
					x--;
				if (i < x)
				{
					tmp = array[i];
					array[i] = array[x];
					array[x] = tmp;
				}
			}
			tmp = array[p];
			array[p] = array[x];
			array[x] = tmp;
			quick_sort(array, (x - 1));
			quick_sort(array, l);
		}
	}
}