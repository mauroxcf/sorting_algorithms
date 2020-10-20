#include "sort.h"

/**
 * selection_sort - use the selecion sort method on a array
 *@array: unsorted array of integers
 *@size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t count_ar, count, temp;
	int temp2;

	temp = 0;

	for (count_ar = 0; count_ar < size - 1; count_ar++)
	{
		temp = count_ar;
		for (count =  count_ar + 1; count < size; count++)
		{
			if (array[count] < array[temp])
				temp = count;
		}
		if (count_ar != temp)
		{
			temp2 = array[count_ar];
			array[count_ar] = array[temp];
			array[temp] = temp2;

			print_array(array, size);
		}
	}
}
