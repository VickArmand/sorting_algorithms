#include "sort.h"

/**
 * selection_sort - This function sorts by
 * obtaining minimum value of the array
 * and placing it at the right index on the left
 * @array: integer array
 * @size: length of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, temp;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
}
