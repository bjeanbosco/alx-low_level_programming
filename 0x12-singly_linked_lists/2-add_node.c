#include "lists.h"

/**
* add_node - funtion
*@head: pointer
*@str: string
* Return: returns the address
* if failed
*/

list_t *add_node(list_t **head, const char *str)
{
char *two;
int len;
list_t *wow;

wow = malloc(sizeof(list_t));
if (wow == NULL)
return (NULL);

two = strdup(str);
if (two == NULL)
{
free(wow);
return (NULL);
}
for (len = 0; str[len];)
len++;

wow->str = two;
wow->len = len;
wow->next = *head;

*head = wow;

return (wow);

}
