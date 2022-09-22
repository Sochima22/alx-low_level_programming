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
	*_strcat(*dest, *src);
	return (*dest);
}
