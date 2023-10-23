#include "lists.h"

/**
 * free_listint2 - frees.
 * the function sets the head to NULL.
 * @head: pointer.
 **/
void free_listint2(listint_t **head)
{
listint_t *node;
listint_t *next_;

if (!head)
return;

node = *head;
next_ = (*head)->next;
while (next_)
{
free(node);
node = next_;
next_ = next_->next;
}
free(node);
*head = NULL;
}
