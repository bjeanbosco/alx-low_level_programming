#include "lists.h"

/**
 * reverse_listint - prints a listint_t linked list.
 * @head: pointer to the list.
 * Return: number of nodes in the list.
 **/
size_t print_listint_safe(const listint_t *head)
{
size_t k = 0;
const listint_t *i = head;

if (!head)
exit(98);

while (i)
{
printf("[%p] %i\n", (void *)i, i->n);
i = i->next;
k++;
}
return (k);
}
