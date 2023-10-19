#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
int password[100];
int i, j , k;

srand(time(NULL));

for (i = 0; i < 100; i++)
{
password[i] = rand() % 78;
j += password[i] + '0';
putchar(password[i] + '0');

if ((1900 - j ) - '0' <80)
{
k = 1900 - j - '0';
j += k;
putchar(k + '0');
break;
}
}
}
