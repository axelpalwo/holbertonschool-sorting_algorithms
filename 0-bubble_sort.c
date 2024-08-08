#include "sort.h"
/**
 * bubble_sort - Sort method
 * @array: Pointer to array of numbers
 * @size: Size of array
 * Return: None
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, v, aux;

	for (i = 0; i < size; i++)
	{
		for (v = 0; v < size; v++)
		{
			if (array[v] > array[v + 1])
			{
				aux = array[v + 1];
				array[v + 1] = array[v];
				array[v] = aux;
				print_array(array, size);
			}
		}
	}
}
