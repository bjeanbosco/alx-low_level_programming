#include "main.h"
/**
 * print_number -print number
 * @n: to printed
 * */

void print_number(int n)
{
int i, j, number, numbers, pow;
	unsigned int tmp, well, num;

	i = 0;
	if (n < 0)
	{
		_putchar('-');
		tmp = -n;
	}
	else
	{
		tmp = n;
	}

	number = tmp;

	while (number >= 10)
	{
		number = number / 10;
		i++;
	}
	numbers = number + 1;
	pow = 1;
	j = 1;

	while (j < numbers)
	{
		pow = pow * 10;
		j++;
	}
	well = pow;
	while (well >= 1)
	{
		num = (tmp / j) % 10;
		_putchar(num + '0');
		well = well / 10;
	}
}
