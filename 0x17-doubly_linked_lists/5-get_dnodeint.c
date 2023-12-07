#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of doubly linked list
 * @index: index to look for
 * Return: address to node or NULL if index does not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
		temp = temp->next;
		counter++;

	if (index > (counter - 1))
		return (NULL);

	for (counter = 0; counter < index; counter++)
		head = head->next;

	return (head);
}
