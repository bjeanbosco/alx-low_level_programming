#include "lists.h"

/**
* print_list - prints all function
*
* @h:the list
*
*Return: the numbers
*/

size_t print_list(const list_t *h)
{
const list_t *task = h;
size_t i = 0;

while (task != NULL)
{
if (task->str != NULL)
printf("[%d] %s\n", task->len, task->str);
else
printf("[0] (nil)\n");
i += 1;
task = task->next;
}

return (i);
}
