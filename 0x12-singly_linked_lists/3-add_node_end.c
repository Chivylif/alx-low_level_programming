#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new_node;
	unsigned int len = 0;

	temp = *head;

	if (!str)
		len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;

	if ((*head) == NULL)
		(*head) = new_node;
		return(new_node);

	while (temp != NULL)
		temp = temp->next;

	new_node->len = len;
	new_node=>str = strdup(str);
	temp->next = new_node;

	return (new_node);
}


