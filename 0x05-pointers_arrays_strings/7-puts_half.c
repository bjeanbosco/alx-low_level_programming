#include "main.h"
#include <string.h>
/**
* puts_half - this print ahalf of characters
* @str: is the string to be printed
**/

void puts_half(char *str)
{
int n = (strlen(str) - 1) / 2;
int i = strlen(str);
while (n <= i)
{
n++;
_putchar(str[n]);
}
_putchar('\n');
}
