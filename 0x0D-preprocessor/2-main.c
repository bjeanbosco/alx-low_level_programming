#include <stdio.h>
#include <string.h>
#define filename __FILE__

char printFilename(char *name)
{
int i, len;
len = strlen(name);
for (i = 0; i < len; i++)
{
putchar(name[i]);
}
putchar('\n');
return(*name);
}

int main(void)
{
printFilename(filename);
return (0);
}
