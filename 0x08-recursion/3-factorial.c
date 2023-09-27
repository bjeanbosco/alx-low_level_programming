#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*factorial -f actorial
*@n: number
*Return: on success 1
**/
int factorial(int n)
{
int k;

if (n < 0)
{
k = -1;
}
else if (n == 0)
{
k = 1;
}
else
{
k = n * factorial(n - 1);
}
return (k);
}
