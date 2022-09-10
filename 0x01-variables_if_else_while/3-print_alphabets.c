#include<stdio.h>
/**
 * main-main entry*
 * Description:Both lower and upper case*
 * Return:Always 0 (success)
 */
int main(void)
{int x = 65;
int y = 97;
	while (y >= 97 && y <= 122)
	{putchar(y);
		y++; }
	while (x >= 65 && x <= 90)
	{putchar(x);
		x++; }
	putchar('\n');
	return (0); }
