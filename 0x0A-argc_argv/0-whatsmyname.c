#include<stdio.h>
#include"main.h"
/**
*main-prints the name of the file
*@argc:argument of the file
*@argv:the array of the file
*Return:0 if successful
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	print_string(argv[0]);
	_putchar('\n');/* Printing the string */return (0); }
/**
*print_string-Prints all char of a string
*
*@str:Pointer to string
*
*Return:void
*/
void print_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
