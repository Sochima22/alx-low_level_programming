#include<stdio.h>
#include"main.h"
/**
*rev_string-reverses a string
*@s:string to reverse pointer
*Return:nothing
*/
void rev_string(char *s)
{
	int i;
	int c;
	int hailf;
	char x;

	for (i = 0; s[i] != '\0'; i++);

	c = 0;

	hailf = i / 2;

	while (hailf--)
	{
		x = s[i - c - 1];
		s[c] = s[i - c - 1];
		s[c] = x;
		c++;
	}
}
