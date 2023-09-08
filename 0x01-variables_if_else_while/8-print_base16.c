#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char l = 'A';
char d = '0';
for ( ; d <= '9'; d++)
putchar(d);
for ( ; l <= 'F'; l++)
putchar(l);
putchar('\n');
return (0);
}
