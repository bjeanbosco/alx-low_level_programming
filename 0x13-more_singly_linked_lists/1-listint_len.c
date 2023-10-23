#include "lists.h"

/**
 * listint_len - function.
 * @h: pointer.
 * Return: number.
 **/
size_t listint_len(const listint_t *h)
{
const listint_t *i = h;
size_t k = 0;

while (i)
{
k++;
i = i->next;
}
return (k);
}
