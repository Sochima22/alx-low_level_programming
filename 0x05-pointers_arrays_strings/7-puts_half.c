#include"main.h"
/**
*puts_half-prints second half of a string
*@str:pointer to char array
*/
void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int l;

	while (str[i++])
		j++;

	if ((j % 2) == 0)
		l = j / 2;
	else
		l = (j + 1) / 2;

	for (i = l; i < j; i++)

		_putchar(str[i]);

	_putchar('\n');
}
