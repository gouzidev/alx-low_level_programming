/**
 * int_index - searches for an integer
 *
 * @array: pointer to an int array
 * @size: number of elements in the array 'array'
 * @cmp: pointer to a function that receives an int
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i])
			return (i);
		i++;
	}
	return (-1);
}
