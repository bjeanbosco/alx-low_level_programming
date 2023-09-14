#include "main.h"

/**
*_isdigit - test whether variable is number
*@c: is parametr to be verified
*Return: 1 and returns 0 if not
**/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
