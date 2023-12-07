#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to head of doubly linked list
 * @n: numeric value wanted in new node
 * Return: address to the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *the_new_node;

	if (head == NULL)
		return (NULL);

	the_new_node = malloc(sizeof(dlistint_t));
	if (the_new_node == NULL)
		return (NULL);

	the_new_node->n = n;

	the_new_node->prev = NULL;
	the_new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = the_new_node;
	*head = the_new_node;

	return (the_new_node);
}