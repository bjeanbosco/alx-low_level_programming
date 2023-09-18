#include "main.h"
#include <string.h>
/**
 * puts2 - prints some character
 * @str: is string to be printed
**/

void puts2(char *str)
{
int i = strlen(str), j;
for (j = 0; j < i; j++)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
