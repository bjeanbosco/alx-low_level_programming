#include "lists.h"

/**
 * pop_listint - function.
 * @head: pointer.
 * Return: (n).
 **/
int pop_listint(listint_t **head)
{
	int first;
listint_t *second = *head;

if (!second)
return (0);

first = (*head)->n;
*head = second->next;
free(second);
return (first);
}
