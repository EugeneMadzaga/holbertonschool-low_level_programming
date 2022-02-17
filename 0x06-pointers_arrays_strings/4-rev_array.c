#include "main.h"

/**
 *4-rev_array.c - Reverse the content of an array of integers
 *@a: The array of integers to be reversed
 *@n: Number of array elements
 *
 */
void reverse_array(int *a, int n)
{
int tmp, index;

for (index = n - 1; index >= n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
