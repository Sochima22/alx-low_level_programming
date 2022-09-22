#include<stdio.h>
#include"main.h"
/**
**_strncat-copy strings
*@dest:destination pointer
*@src:source pointer
*@n:number of characters to copy
*Return:returns characters
*/
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (*(dest + x) != '\0')
		x++;

	while (*(src + y) != '\0' && y < n)
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	*(dest + x) = '\0';
	return (dest);
}
