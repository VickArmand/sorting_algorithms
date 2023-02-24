#include "sort.h"

/**
 * swap - function to swap elements
 * @array : pointer to array
 * @index1 : first array index for swapping
 * @index2 : second array index for swapping
*/

void swap(int *array, size_t index1, size_t index2)
{
	int temp = array[index1];

	array[index1] = array[index2];
	array[index2] = temp;
}
