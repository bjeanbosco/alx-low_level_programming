#include "main.h"
#include <string.h>
#include <stdio.h>
#include <math.h>

/**
*_pow_recursion - pow in number
*@x: base number
*@y: exponetial number
*Return: on success 1
**/

int _pow_recursion(int x, int y)
{

if (y < 0) 
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
