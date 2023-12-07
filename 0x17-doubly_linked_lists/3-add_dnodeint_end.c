#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to head of doubly linked list
 * @n: numeric value wanted in new node
 * Return: address to the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *the_new_node, *temp_ptr = *head;

	if (head == NULL)
		return (NULL);

	the_new_node = malloc(sizeof(dlistint_t));
	if (the_new_node == NULL)
		return (NULL);

	the_new_node->n = n;
	if ((*head) == NULL)
	{
		the_new_node->prev = NULL, the_new_node->next = *head;
		*head = the_new_node;
		return (the_new_node);
	}

	while (temp_ptr->next != NULL)
		temp_ptr = temp_ptr->next;

	the_new_node->prev = temp_ptr;
	the_new_node->next = NULL;
	temp_ptr->next = the_new_node;
	return (the_new_node);
}
