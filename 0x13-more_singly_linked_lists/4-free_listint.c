#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - free list
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
*/

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
