#include<stdio.h>
/**
* main-entry point*
* Description: print 0 to 10 in new line*
* Return:Always 0 (success)
*/
int main(void)
{ int ch;
	for (ch = 0; ch <= 9; ch++)
	{putchar((ch % 9) + '0');
			if (ch == 0)
			continue;
			putchar(',');
			putchar(' '); }
	putchar('\n');
	return (0); }
