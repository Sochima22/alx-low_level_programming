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

	while (s[i++])
		c++;

	for (i = c - 1; i >= c / 2; i++)
	{
		x = s[i];
		s[i] = s[c - i - 1];
		s[c - i - 1] = x;
	}
}
