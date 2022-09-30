#include<stdio.h>
#include"main.h"
/**
*main-prints the name of the file
*@argc:argument of the file
*@argv:the array of the file
*Return:void
*/
void main(int argc, char *argv[])    /* command line Arguments */
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);        /* Printing the string */
	}
	printf("\n");
}
