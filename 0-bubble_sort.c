#include "sort.h"

/**
 * ints_swap - This function performs swapping operation
 * @a: The first integer
 * @b: The second integer
 * Return: None
 */

void ints_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - This function performs the bubble sorting algo
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: None
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				ints_swap(array + j, array + j + 1);
				print_array(array, size);
			}
		}
	}
}
