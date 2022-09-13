#include<stdio.h>
#include"main.h"
/**
*print_alphabet_x10- Main entry*
*Description: funtions prototypes*
*Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++; }}
