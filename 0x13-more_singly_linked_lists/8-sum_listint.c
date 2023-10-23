#include "lists.h"

/**
 * sum_listint - returns the sum.
 * @head: pointer.
 * Return: sum.
 **/
int sum_listint(listint_t *head)
{
listint_t *str = head;
int add = 0;

while (str)
{
add += str->n;
str = str->next;
}

return (add);
}
