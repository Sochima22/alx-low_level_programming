#include<stdio.h>
#include"main.h"
void print_array_element(char *str);
/**
*main-prints all arguments
*@argc:contains the total number of parameters
*@argv:string array pointer containing all parameters
*Return:0 if successful
*/
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		print_array_element(argv[counter]);
		_putchar('\n');
	}
		return (0);
}
/**
*print_array_element-Prints all char of a string
*
*@str:Pointer to string
*
*Return:void
*/
void print_array_element(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
