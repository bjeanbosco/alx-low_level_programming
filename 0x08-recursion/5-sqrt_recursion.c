#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * sqr - sqr
 * @x: number 1
 * @y: number
 *Return: on success 1
 *on error return -1
 **/


int sqr(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqr(x, y + 1));
}
/**
* _sqrt_recursion - sqrt
* @n: number
* Return: on success 1
* on error retur
**/
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
