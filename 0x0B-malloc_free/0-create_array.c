#include<stdlib.h>
#include"main.h"

/**
*create_array-creates chars array and initialize it.
*@size:size of the array to be initialize.
*@c:the specific character to initialize the array with.
*Return:null if size = 0, pointer or null if it fails.
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 1; index < size; index++)
		array[index] = c;

	return (array);
}
