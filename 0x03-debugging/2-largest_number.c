#include"main.h"
/**
*largest_number - returns largest of the three numbers*
*@a:first number*
*@b:second number*
*@c:third number*
*Return: largest number
*/
int largest_number(int a, int b, int c)
{
	int largest = a;

	if (b > largest)
		largest = b;
	if (c > largest)
		largest = c;
	return(largest);
