#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: a pointer to an array
 * @the size of the array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int temp;
	int swap = 1;

	if (array == NULL || size < 2)
		return;
	while (swap == 1)
	{
		swap = 0;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = 1;
				print_array(array, size);
			}
		}
		len--;
	}
}
