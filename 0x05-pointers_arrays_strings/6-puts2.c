#include"main.h"
/**
*puts2-prints every other character of a string from first character
*@str: pointerto the string
*Return:void
*/
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i++])
		j++;

	for (i = 0; i < j; i += 2)

		_putchar(str[i]);


	_putchar('\n');
}
