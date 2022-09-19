#incluse"main.h"
/**
*puts2- prints every other character of a string from first character
*@str: pointerto the string
*Return:void
*/
void put2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
