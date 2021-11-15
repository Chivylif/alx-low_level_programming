#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node to end of listint_t list
 * @head: head of the linked list to print.
 * @n: node data to add to list
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	temp = *head;

	if (*head == NULL)
		*head = new_node;
		return (new_node);

	while (temp != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
