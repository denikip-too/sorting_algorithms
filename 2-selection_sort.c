#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of an array
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int i, j, min, temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		temp = array[min];
                array[min] = array[i];
                array[i] = temp;
                print_array(array, size);
		}
}
