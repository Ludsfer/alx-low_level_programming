#include "search_algos.h"

/**
 * search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: A given array
 * @size: Number of elements of the array
 * @value: Value searched for
 * Return: The index number of the array
 */
int search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (search(array, half + 1, value));

	half++;
	return (search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - calls to rec_search to return
 * the index of the number
 *
 * @array: The given array
 * @size: The number of elements of the array
 * @value: The value searched for
 * Return: The index number of the array
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
