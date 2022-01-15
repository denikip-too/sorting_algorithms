#include "sort.h"

/**
 * partition - partition point by pivot point
 * @array: array of integers
 * @first: first element in array
 * @last: last element in array
 * @size: size of an array
 * Return: value
 */
int partition(int *array, int first, int last, size_t size)
{
	int pivot, i, j, t;

	pivot = array[last];
	i = first - 1;

	for (j = first; j <= last - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			t = array[i];
			array[i] = array[j];
			array[j] = t;
			print_array(array, size);
		}
	}
	t = array[i + 1];
	array[i + 1] = array[last];
	array[last] = t;
	print_array(array, size);
	return (i + 1);
}
/**
 * quicksort - sorts an array of integers in ascending order
 * @array: array of integers
 * @first: first element in array
 * @last: last element in array
 * @size: size of integer
 */
void quicksort(int *array, int first, int last, size_t size)
{
	if (first < last)
	{
		int pi;

		pi = partition(array, first, last, size);
		quicksort(array, first, pi - 1, size);
		quicksort(array, pi + 1, last, size);
	}
}
/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}
