#include "lists.h"

/**
 * insert_nodeint_at_index - inserts.
 * @head: pointer.
 * @idx: position.
 * @n: data.
 * Return: the address
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *p = *head;
listint_t *k;
unsigned int index;
unsigned int cont = 0;
k = malloc(sizeof(listint_t));
if (k == NULL)
return (NULL);
k->n = n;


if (idx == 0)
{
p->next = *head;
*head = p;
return (*head);
}

/* search of position to insert */
index = idx - 1;
while (p && cont != index)
{
cont++;
p = p->next;
}

/* general case */
if (cont == index && p)
{
k->next = p->next;
p->next = k;
return (k);
}

free(k);
return (NULL);
}
