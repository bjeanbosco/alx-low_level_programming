#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*_pow_recursion - pow
*@x: base
*@y: pow
*Return: on success 1
*n error return -1
**/
int _pow_recursion(int x, int y)
{

if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
