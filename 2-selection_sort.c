#include "sort.h"

/**
 * swap_ints - This function does the swapping
 * @a: The integer to be replaced
 * @b: The integer to be replaced with
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * selection_sort - This function performs selection sorting
 * by finding the smallest integer and swapping with a bigger integer
 * @array: The array to be sorted
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *min)
			{
				min = (array + j);
			}
		}
		if (min != (array + i))
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}
