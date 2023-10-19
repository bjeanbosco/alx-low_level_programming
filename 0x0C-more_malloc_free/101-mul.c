#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int mult(int a, int b)
{
if (!a || !b)
{
printf("Error \n");
exit (98);
}
else if (!(a >= '0') && !(b <= '9'))
{
printf("Error\n");
exit (89);
}
else
{
return (a * b);
}
}


int main(void)
{
int num1, num2 ,mul;

mul = mult(num1, num2);
return (0);
}
