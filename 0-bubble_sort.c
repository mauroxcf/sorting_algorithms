#include "sort.h"

/**
 * bubble_sort - sort algorithm with the bubble sort method
 *
 * @array: The array unsorted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int count_ar, count;
	int temp;

	for (count_ar = 0; count_ar < size; count_ar++)
	{
		for (count = 0; count < size - 1; count++)
		{
			if (count == size - 1)
				break;
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;

				print_array(array, size);
			}
		}
	}
}

