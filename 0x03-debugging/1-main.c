#include<stdio.h>

/**
*main-causes an infinite loop
*Return: 0
*/

int main(void)
{
	int i;

	printf("infinite loop comming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
		/*updating i value is missing*/
	}

	printf("infinite loop avoided! \\o/\n");

	return (0);
