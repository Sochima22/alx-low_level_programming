#include<stdio.h>
/**
 * main-Entry function*
 * Description:prints the alphabet in lowercase, followed by a new line.*
 * Return:Always 0 (sucess)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
