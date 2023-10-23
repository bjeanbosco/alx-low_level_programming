#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - prints function
 * @h: pointer 
 * Return: number
 **/
size_t print_listint(const listint_t *h)
{
const listint_t *m = h;
size_t i = 0;

while (m)
{
printf("%i\n", m->n);
i++;
m = m->next;
}

return (i);
}
