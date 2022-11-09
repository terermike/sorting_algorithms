#include "sort.h"

void shell_sort(int *array, size_t size);
int initial_gap(int n);
void swap(int *i, int *j);

/**
 * shell_sort - t sorts an array of integers in ascending order using the
 * Shell sort algorithm, using the Knuth sequence
 * @array: to sort
 * @size: of array
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	int gap, g, i, j, siz = size;

	if (!array || size < 2)
	    return;
	g = initial_gap(siz);

	for (gap = g; gap >= 1; gap = gap / 3)
	{
	for (j = gap; j < siz; j++)
	{
	for (i = j; i >= gap, (array[i + gap] > array[i]; i = i - gap)
	{
	swap(&array[i + gap], &array[i]);
    print_array(array, size);
	}
	}
	}
	}
}

/**
 * initial_gap - to find the size of the gap to use using Knuth sequence
 * @n: size of array
 * Return: the gap to use
 */
int initial_gap(int n)
{
	int gap;

	gap = 1;
	while (gap < n / 3)
	{
	gap = gap * 3 + 1;
	}
	return (gap);
}
/**
 * swap - swaps elements
 * @i: 1st element
 * @j: 2nd element
 */
void swap(int *i, int *j)
{
	int temp;

	temp = *i;
	*i = *j;
	*j = temp;
}
