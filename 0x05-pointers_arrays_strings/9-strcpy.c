#include"main.h"
/**
*_strcpy-copies a string pointed to by @src,incuding the
*terminating null byte, to a buffer pointed to by @dest
*@dest:buffer to copy the string to
*@src:source string to copy
*Return:pointer to the destination string @dest
*/
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
