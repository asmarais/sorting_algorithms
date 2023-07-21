#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: a pointer that points at an array
 * @size: the size of the array
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, mid;
	int temp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		mid = i;
		for  (j = i + 1; j < size; j++)
		{
			if (array[j] < array[mid])
				mid = j;
		}
		if (i != mid)
		{
			temp = array[i];
			array[i] = array[mid];
			array[mid] = temp;
			print_array(array, size);
		}
	}
}
