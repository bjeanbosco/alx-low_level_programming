#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the list.
 * Return: pointer to the first node of the reversed list
 **/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *next_n;

if (!head)
return (NULL);

prev = NULL;
while (*head)
{
next_n = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next_n;
}
*head = prev;
return (*head);
}
