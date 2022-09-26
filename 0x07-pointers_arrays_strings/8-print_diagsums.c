#include<stdio.h>
/**
*print_diagsums-a function that prints the sum of the two diagonals
*of a square matrix of integers
*@a:2D array
*@size:size x size of the square matrix
*
*Return:nothing
*/
void print_diagsums(int *a, int size)
{
	int x;
	int y = 0;
	int z = 0;
	int s = size * size;

	for (x = 0; x < s; x += size + 1)
	{
		y += a[x];
	}

	for (x = size - 1; x < s - 1; x += size - 1)
	{
		z += a[x];
	}

	printf("%d, %d\n", y, z);
}
