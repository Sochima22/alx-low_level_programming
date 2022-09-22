#include<stdio.h>
#include"main.h"
/**
*_strncpy-copy strings
*@dest:destination pointer
*@src:source pointer
*@n:number of characters to copy
*Return:returns characters
*/
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x =0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] != '\0';
		x++;
	}
	return (dest);
}
