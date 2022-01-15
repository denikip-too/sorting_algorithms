#include "sort.h"

/**
 * heap_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of an array
 */
void heap_sort(int *array, size_t size)
{
	int temp, c, i, k;

	for (i = size - 1; i >= 0 ; i--)
	{
		temp = array[0];
		array[0] = array[i];
		array[i] = temp;
		k = 0;
		do
		{
			c = 2 * k + 1;
			if ((array[c] < array[c + 1]) && c < i - 1)
				c++;
			if (array[k] < array[c] && c < i)
			{
				temp = array[k];
				array[k] = array[c];
				array[c] = temp;
			}
			print_array(array, size);
			k = c;
		} while (c < i);
	}
}
