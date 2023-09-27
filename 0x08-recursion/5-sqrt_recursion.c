#include "main.h"
#include <stdio.h>
#include <math.h>
/**
* _sqrt_recursion - sqrt
* @n: number
* Return: on success 1
**/

int _sqrt_recursion(int n)
{
int k = sqrt (n);
if (k != (k / 2 == 0) || k != ((k + 1 ) / 2 == 0))
{
return (-1);
}
else
{
return (k);
}
}
