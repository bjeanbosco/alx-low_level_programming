#include "lists.h"

/**
 * free_listint - frees a .
 * @head: pointer.
 **/
void free_listint(listint_t *head)
{
listint_t *pre;
listint_t *new;

if (head)
{
pre = head;
new = head->next;
while (new)
{
free(pre);
pre = new;
new = new->next;
}
free(pre);
}
}
