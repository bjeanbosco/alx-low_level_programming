#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* *array_range - function
*@min: min interger
*@max: max integer
*Return: arr
**/

int *array_range(int min, int max)
{
int *arr;
int i, j;
j = (max - min) + 1;
if (min > max)
return (NULL);

arr = malloc(sizeof(int) * j);
if (arr == NULL)
return (NULL);
for (i = 0; min <= max; i++)
{
arr[i] = min++;
}
return (arr);
}

