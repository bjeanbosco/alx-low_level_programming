#include "lists.h"

/**
 * add_node_end - Adds a new node function
 *@head: pointer
 *@str: string to add
 *Return: NULL in case of failure
 *or address or the element
*/

list_t *add_node_end(list_t **head, const char *str)
{
char *dup;
int len;
list_t *word, *first;
word = malloc(sizeof(list_t));
if (word == NULL)
return (NULL);

dup = strdup(str);
if (str == NULL)
{
free(word);
return (NULL);
}

for (len = 0; str[len];)
len++;

word->str = dup;
word->len = len;
word->next = NULL;

if (*head == NULL)
*head = word;
else
{
first = *head;
while (first->next != NULL)
first = first->next;
first->next = word;
}
return (*head);
}
