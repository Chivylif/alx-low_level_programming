#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a node to the beginning of a list
 * @head: the first node of the list
 * @str: the data of the new node
 *
 * Return: the address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;
	
	if (str == NULL)
		return len;
	// calculate the lenth of str
	while (str)
	{
		len++;
		str++;
	}
	
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return(NULL);
	if (*head == NULL)
		new_node->next = NULL;
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = (*head);
	(*head) = new_node;

	return(*head);
}
