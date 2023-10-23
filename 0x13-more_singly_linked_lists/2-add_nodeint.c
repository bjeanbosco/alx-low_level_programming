#include "lists.h"

/**
 * add_nodeint - adds.
 * @head: pointer .
 * @n: int
 * Return: address
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *wow;

wow = malloc(sizeof(listint_t));
if (wow == NULL)
return (NULL);

wow->n = n;
wow->next = *head;
*head = wow;

return (wow);
}
