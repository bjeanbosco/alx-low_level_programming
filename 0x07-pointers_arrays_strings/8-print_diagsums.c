#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*print_diagsums - print sum
*@a: array
*@size: second array
**/


void print_diagsums(int *a, int size)
{
int i, x, p;

x = 0;
p = 0;

for (i = 0; i < (size * size); i += size + 1)
x += a[i];
for (i = size - 1; i < (size * size - 1); i += size - 1)
p += a[i];
printf("%d, %d\n", x, p);
}
