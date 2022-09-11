#include<stdio.h>
/**
 * main-main entry*
 * Description:Both lower and upper case*
 * Return:Always 0 (success)
 */
int main(void)
{int y = 0;
char x;
while (y >= 0 && y <= 9)
{putchar(y);
	y++; }
	for (x >= 'a'; x = 'f'; x++)
{putchar(x); }
putchar('\n');
return (0); }
