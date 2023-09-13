#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;
<<<<<<< HEAD
if (a >= b && b >= c)
{
largest = a;
}
else if (b >= a && a >= c)
=======
if (a > b && a > c)
{
largest = a;
}
else if (b > a && b > c)
>>>>>>> 4e6750d0106026da0ba4b2b6c7b038bbc3c25b84
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
