#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: the matrix
 * @size: the length of the arrays
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;
	int len;

	i = 0;
	sum1 = sum2 = 0
	len = size * size;
	while (i < len)
	{
		if (i % (size - 1) == 0 && i < len - 1 && i > 0)
			sum2 += *(a + 1);
		if (i % (size + 1) == 0 || i == 0)
			sum1 += *(a + i);
		i++;
	}
	printf("%d, %s\n", sum1, sum2);
}
