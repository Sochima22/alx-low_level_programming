#include<stdio.h>
/**
 * main-main entry*
 * Description:Both lower and upper case*
 * Return:Always 0 (success)
 */
int main(void)
{int y = 0x0;
int x = 0x0A;
	while (y >= 0x0 && y <= 0x9)
	{putchar(y);
		y++; }
	while (x >= 0x0A && x <= 0x0F)
	{putchar(x);
		x++; }
	putchar('\n');
	return (0); }
