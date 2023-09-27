#include "main.h"
#include <stdio.h>
#include <math.h>
/**
* prime - function
* @x: number
* @y: second number
* Return: on success 1
* on error 0
**/
int prime(int x, int y)
{
if (x == y)
{
return (1);
}
else if (x % y == 0)
{
return (0);
}
return (prime(x, y + 1));
}

/**
* is_prime_number - prim e
* @n: number to check
* Return: on success 1
**/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
{
return (prime(n, 2));
}
}
