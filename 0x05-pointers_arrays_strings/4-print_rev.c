#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a revrsed string, 
 * @s: string to be revesed
 * Return: no return.
 */
void print_rev(char *s)
{
int i = strlen(s);
int j;

for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
