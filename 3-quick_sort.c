#include "sort.h"


/**
 * swap_values - swaps 2 values in an array of ints
 *
 * @array: the array of ints
 * @i1: index of first value
 * @i2: index of 2nd value
 *
 * Return: the array with value
 */

void swap_values(int **array, ssize_t i1, ssize_t i2)
{
	int tmp;

	tmp = (*array)[i1];
	(*array)[i1] = (*array)[i2];
	(*array)[i2] = tmp;
}
