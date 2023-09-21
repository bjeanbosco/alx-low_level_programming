#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*reverse_array - this is print array in reverse way
*@a: this is an array to be reversed
*@n: this is the size of an array
**/

void reverse_array(int *a, int n)
{

int i, k;
k = 0;
for (i = 0; i  < n / 2; i++)
{
k = a[i];
a[i] = a[n - 1 - i];
a[n - i - 1] = k;
}
}
