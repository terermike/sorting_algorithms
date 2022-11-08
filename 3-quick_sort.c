#include "sort.h"

void quick_sort(int *array, size_t size);
void q_sort(int *array, size_t size, int l, int h);
int partition(int *array, size_t size, int l, int h);
void swap(int *a, int *b);

/**
 * quick_sort - Sort an array of integers in ascending
 *	order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 * Return: nothing
 * Description: Uses the Lomuto partition scheme. Prints
 *	the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
	{
	return;
	}

	q_sort(array, size, 0, size - 1);
}

/**
 * q_sort - recursively sorts the list
 * @array: array to sort
 * @size: size of the array
 * @l: the left bound of the array
 * @h: the right bound of the array
 * Return: nothing
 */
void q_sort(int *array, size_t size, int l, int h)
{
	int index;

	if (l < h)
	{
	index = partition(array, size, l, h);
	q_sort(array, size, l, index - 1);
	q_sort(array, size, index + 1, h);
	}
}

/**
 * partition - Order a subset of an array of integers according to
 * the lomuto partition scheme (last element as pivot).
 * @array: array
 * @size: size
 * @l: left bound of array
 * @h: right bound of the array
 * Return: nothing
 */
int partition(int *array, size_t size, int l, int h)
{
	int pivot, i, j;

	pivot = array[h];

	i = l;
	for (j = l; j < h; j++)
	{
	if (array[j] <= pivot)
	{
	swap(&array[j], &array[i]);
	i++;
	print_array(array, size);
	}
	}
	swap(&array[i], &array[h]);
	print_array(array, size);
	return (i);
}

/**
 * swap - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
