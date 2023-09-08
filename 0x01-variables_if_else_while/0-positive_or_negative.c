#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there
 * main: is for validating if the number ins positive
 * Return:  style doc for function main goes there
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive", n);
}
else if (n == 0)
{
printf("%d is zero", n);
}
/* if the number number is not positive or zero is negative */
else
{
printf("%d is negative", n);
}
return (0);
}
