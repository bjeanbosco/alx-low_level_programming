#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';
char ch = 'A';
for ( ; letter <= 'z'; letter++)
putchar(letter);
for ( ; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
