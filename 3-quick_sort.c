#include "sort.h"

/**
 * quick_sort - Entry point
 *@array: unsorted array of integers
 *@size: size of the array
 * Return: 0
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_sort_eli_vale_mauro(array, size, 0, size - 1);

}

/**
 * quick_sort_eli_vale_mauro - using quick sort method
 *@array: unsorted array of integers
 *@size: size of the array
 *@p_low: low position
 *@p_high: hight position
 * Return: 0
 */
void quick_sort_eli_vale_mauro(int *array, size_t size, int p_low, int p_high)
{
	int pi = 0;

	if (p_low < p_high)
	{
		pi = partition(array, size, p_low, p_high);
		quick_sort_eli_vale_mauro(array, size, p_low, pi - 1);
		quick_sort_eli_vale_mauro(array, size, pi + 1, p_high);
	}
}

/**
 * partition - using quick sort method
 *@array: unsorted array of integers
 *@size: size of the array
 *@p_low: low position
 *@p_high: high position
 * Return: min_num
 */
int partition(int *array, size_t size, int p_low, int p_high)
{
	int pivot, min_num, temp_swap, count;

	pivot = array[p_high];
	min_num = p_low;

	for (count = p_low; count < p_high; count++)
	{
		if (array[count] <= pivot)
		{
			temp_swap = array[count];
			array[count] = array[min_num];
			array[min_num] = temp_swap;
			if (count != min_num)
				print_array(array, size);
			min_num++;

		}
	}
	temp_swap = array[count];
	array[count] = array[min_num];
	array[min_num] = temp_swap;
	if (count != min_num)
		print_array(array, size);

	return (min_num);
}
