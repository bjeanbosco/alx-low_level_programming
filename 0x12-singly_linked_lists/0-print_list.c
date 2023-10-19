#include "lists.h"
#include <stdio.h>
/**
* print_list - print function
*
* @h:pointer to the list
*
*Return: the number
*/

size_t print_list(const list_t *h)
{
const list_t *k = h;
size_t i = 0;

while (k != NULL)
{
if (k->str != NULL)
printf("[%d] %s\n", k->len, k->str);
else
printf("[0] (nil)\n");
i += 1;
k = k->next;
}

return (i);
}
