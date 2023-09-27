#include "main.h"
#include <stdio.h>
#include <math.h>
/**
* _sqrt_recursion - sqrt
* @n: number
* Return: on success 1
* on error return -1
**/

int _sqrt_recursion(int n, int x)
{
if (n * n == x)
return (n);
else if (n * n > x)
return (-1);
return (_sqrt_recursion(x, n + 1));
}
