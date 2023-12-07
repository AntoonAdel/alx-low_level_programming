#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of doubly linked list
 * @idx: index to look for
 * @n: numeric value wanted in node inserted
 * Return: address to new node or NULL if not possible to insert
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *the_new_node, *temp_counter = *h, *temp1 = *h, *temp2;
	unsigned int counter = 0;

	if (h == NULL)
		return (NULL);
	while (temp_counter != NULL)
		temp_counter = temp_counter->next, counter++;
	if (idx > counter)
		return (NULL);

	the_new_node = malloc(sizeof(dlistint_t));
	if (the_new_node == NULL)
		return (NULL);

	the_new_node->n = n;
	if (idx == 0)
	{
		the_new_node->prev = NULL, the_new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = the_new_node;
		*h = the_new_node;
		return (the_new_node);
	}

	for (counter = 0; counter < idx; counter++)
		temp2 = temp1, temp1 = temp1->next;

	the_new_node->next = temp1;
	the_new_node->prev = temp2;
	temp2->next = the_new_node;
	if (temp1 != NULL)
		temp1->prev = the_new_node;

	return (the_new_node);
}
