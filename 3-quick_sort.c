#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 *@array: array the integer for order.
 *@size: size of array.
 * Return: void.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick(array, 0, size - 1, size);
}

/**
 * change - swapping values of a array.
 * @a: value one for swap.
 * @b: value two for swap.
 * Return: void.
 */

void change(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}


/**
 * partition - partition array between low and high index.
 * @array: input array.
 * @first_value: index of start of array.
 * @last_value: index of end of array.
 * @size: length of array.
 * Return: Starting index plus one
 */

int partition(int *array, int first_value, int last_value, size_t size)
{
	int p = array[last_value];
	int i = first_value;
	int j;

	for (j = first_value; j < last_value; j++)
	{
		if (array[j] <= p)
		{
			change(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	change(&array[i], &array[last_value]);
	if (i != j)
	{
		print_array(array, size);
	}
	return (i);
}


/**
 * quick - Quick Sort with extra parameter size
 * @array: input array.
 * @first_value: index of start of array
 * @last_value: index of end of array
 * @size: size length of array
 */

void quick(int *array, int first_value, int last_value, size_t size)
{

	if (first_value < last_value)
	{
		int pi = partition(array, first_value, last_value, size);

		quick(array, first_value, pi - 1, size);
		quick(array, pi + 1, last_value, size);
	}
}
