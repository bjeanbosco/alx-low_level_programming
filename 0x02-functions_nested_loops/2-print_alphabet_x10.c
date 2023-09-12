#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char i = 'a';
char j = '0';
for ( ; j <= '9'; j++)
{
for ( ; i <= 'z'; i++)
{
_putchar(i);
_putchar('\n');
}
}
}
