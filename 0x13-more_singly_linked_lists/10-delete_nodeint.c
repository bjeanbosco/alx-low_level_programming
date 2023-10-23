#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 * @head: pointer to the list.
 * @index: position 
 ** Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node = *head;
listint_t *delete = *head;
unsigned int i;
unsigned int cont = 0;


if (!(*head))
return (-1);
if (index == 0)
{
*head = delete->next;
free(delete);
return (1);
}


i = index - 1;
while (node && cont != i)
{
cont++;
node = node->next;
}

if (cont == i && node)
{
delete = node->next;
node->next = delete->next;
free(delete);
return (1);
}

return (-1);
}
