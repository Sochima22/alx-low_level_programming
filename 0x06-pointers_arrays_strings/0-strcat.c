#include<stdio.h>
#include"main.h"
/**
**_strcat-concatenates two strings
*@dest:destination pointer
*@src:source pointer
*Return:returns characters
*/
char *_strcat(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
