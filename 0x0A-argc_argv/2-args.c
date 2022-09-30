#include<stdio.h>
#include"main.h"
/**
*args-prints all arguments
*@argc:contains the total number of parameters
*@argv:string array pointer containing all parameters
*Return:0 if successful
*/
int args(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("argv[%2d]: %s\n", counter, argv[counter]);
	return (0);
}
