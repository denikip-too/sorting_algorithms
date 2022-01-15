#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of integers
 */
void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j;
	int temp;
	int xchanges;

	for (i = 0; i < size - 1; i++)
	{
		xchanges = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{

				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				xchanges++;
			}
		}
		if (xchanges == 0)
                        break;
	}
}
