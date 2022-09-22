#include<stdio.h>
#include"main.h"
/**
*reverse_array-reverses array of integer
*@a:array
*@n:number of elements of array
*Return:void
*/
void reverse_array(int *a, int n)
{
	int x. y;

	for (x = 0; x < n; x++)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
