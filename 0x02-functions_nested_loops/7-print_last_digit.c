#include "main.h"
/**
*print_last_digit - function that print last digit of a combination number
*@n: number to be targeted
*Return: returns 0
*/
int print_last_digit(int n)
{
int last = n % 10;
if (last < 0)
last *= -1;
_putchar(last + '0');
return (last);
}