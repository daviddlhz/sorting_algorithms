#include "sort.h"

/**
 * selection_sort - sorts a list by choosing smallest int
 * from the right to position on left
 *
 * @array: Array to evaluated
 * @size: size of Array
 */

void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;
	size_t min_idx = 0, flag;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
				flag = 1;
			}
		}

		if (flag)
		{
			tmp = array[min_idx];
			array[min_idx] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
