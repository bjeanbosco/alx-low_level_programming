#include "lists.h"

/**
 * get_nodeint_at_index - returns function.
 * @head: pointer.
 * @index: paramter.
 * Return: NULL.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *string = head;
unsigned int count = 0;

while (string && count != index)
{
count++;
string = string->next;
}
if (string && count == index)
return (string);
return (NULL);
}
