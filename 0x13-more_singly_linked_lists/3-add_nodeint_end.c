#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * add_nodeint_end - adds a new node to a singly linked list at the end of it
  * @head: pointer to head of the singly linked list_t
  * @n: number to add to the new node
  * Return: the address of the new element, or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t));
	temp = *head;

	if (new == 0)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (temp == 0)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (new);
}
