#include "search_algos.h"

/**
 * linear_search - search and print a value from an array of integer
 * @array: The passed array of integers
 * @size: The size of the array
 * @value: The value searched for
 *
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

