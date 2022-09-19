#include<stdio.h>
#include"main.h"
/**
*rev_string-reverses a string
*@s:string to reverse pointer
*Return:nothing
*/
void rev_string(char *s)
{
	int i = 0;
	int c = 0;
	char x;

	while (*s++)
		c++;

	for (i = c - 1; i >= c / 2; i++)
	{
		x = *s;
		*s = *s[x - i - 1];
		*s[x - i - 1] = x;
	}
}
