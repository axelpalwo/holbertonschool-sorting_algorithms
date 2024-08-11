#include "sort.h"
/**
 * selection_sort - Sort Method
 * @array: Pointer to Array
 * @size: Size of Array
 * Return: None
 */
void selection_sort(int *array, size_t size)
{
	size_t i, v;
	int aux, saux;

	if (array && size)
	{
		for (i = 0; i < size; i++)
		{
			aux = array[i];
			for (v = i + 1; v < size; v++)
			{
				if (array[v] < aux)
				{
					aux = array[v];
					saux = v;
				}
			}
			if (array[i] != aux)
			{
				array[saux] = array[i];
				array[i] = aux;
				print_array(array, size);
			}
		}
	}
}
