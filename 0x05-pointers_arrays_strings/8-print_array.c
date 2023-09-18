#include "main.h"
#include <stdio.h>
/**
*print_array - this print array data
*@a: this is name of array
*@n: size of array
**/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}
