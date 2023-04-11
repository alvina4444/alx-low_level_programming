#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: size of the array to be created
 * @c: character to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails
 **/
char *create_array(unsigned int size, char c)
{
	/* Return NULL if size is zero */
	if (size == 0)
	{
		return (NULL);
	}

	/* Allocate memory for the array */
	char *array = malloc(size * sizeof(char));

	/* If allocation fails, return NULL */
	if (array == NULL)
	{
		return (NULL);
	}

	/* Initialize the array with the given character */
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	/* Return the pointer to the array */
	return (array);
}
