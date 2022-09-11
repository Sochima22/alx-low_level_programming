#include<stdio.h>
/**
 * main-main entry*
 * Description:Both lower and upper case*
 * Return:Always 0 (success)
 */
int main(void)
{int y = 0x30;
char x = 0x61;
while (y >= 0x30 && y <= 0x39)
{putchar(y);
	y++; }
	while (x >= 0x61 && y <= 0x66)
{putchar(x);
	x++; }
	putchar('\n');
	return (0); }
