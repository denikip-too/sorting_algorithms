#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order
 * using the Shell sort algorithm
 * @array: array to be sorted
 * @size: size of an array
 */
void shell_sort(int *array, size_t size)
{
	unsigned long int i, n;
	int j, k;

	n = 1;
	while (n <= ((size - 1) / 9))
	{
		n = n * 3 + 1;
	}
	while (n >= 1)
	{
		for (i = n; i < size; i++)
		{
			k = array[i];
			for (j = i - n; j >= 0 && k < array[j]; j -= n)
				array[j + n] = array[j];
			array[j + n] = k;
		}
		print_array(array, size);
		n /= 3;
	}
}
