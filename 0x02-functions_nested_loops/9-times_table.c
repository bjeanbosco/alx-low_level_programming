#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
int num1, mult, result;
for (num1 = 0; num1 <= 9; num1++)
{
_putchar('0');

for (mult = 1; mult <= 9; mult++)
{
_putchar(',');
_putchar(' ');
result = num1 * mult;
if (result <= 9)
_putchar(' ');
else
_putchar((result / 10) + '0');

_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
