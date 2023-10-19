#include "lists.h"

/**
 *free_list - Frees a list function
 *@head: A pointer
 *
 */

void free_list(list_t *head)
{
list_t *a;

while (head)
{
a = head->next;
free(head->str);
free(head);
head = a;
}
}
