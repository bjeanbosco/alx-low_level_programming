#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = '0';
for ( ; x <= '9'; x++)
{
putchar(x);
if (x < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}


