#include<stdio.h>
#include"main.h"
/**
*print_alphabet_x10- Main entry*
*Description: funtions prototypes*
*Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{int ch;
	int i;
	for(i = 0; i <= 9; i++);
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		}
	return; }

