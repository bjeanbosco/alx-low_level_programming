#include "lists.h"

/**
 * add_nodeint_end - adds.
 * @head: pointer.
 * @n: int.
 * Return: address
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *m, *i = *head;

m = malloc(sizeof(listint_t));
if (m == NULL)
return (NULL);
m->n = n;
m->next = NULL;

if (i)
{
while (i->next)
i = i->next;
i->next = m;
}
else
*head = m;

return (m);
}
