#include "sort.h"
/**
 * bubble_sort - order with Bubble sort.
 *@array: expected to a sort.
 *@size: size of the a array.
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int more_value;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				more_value = array[j];
				array[j] = array[j + 1];
				array[j + 1] = more_value;
				print_array(array, size);
			}
		}
	}
}
