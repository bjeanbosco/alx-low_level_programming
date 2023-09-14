#include <stdio.h>
/**
*main - function
* Return: 0
**/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 != 0) && (i % 5 != 0))
{
printf("%d", i);
printf(" ");
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
printf(" ");
}
else if (i % 3 == 0)
{
printf("Fizz");
printf(" ");
}
else
{
printf("Buzz");
printf(" ");
}
}
printf("\n");
return (0);
}
