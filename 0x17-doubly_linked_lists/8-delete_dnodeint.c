#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to head of doubly linked list
 * @index: index to look for
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_counter = *head, *temp1 = *head, *temp2, *temp3;
	unsigned int counter = 0;

	if (head == NULL || (*head) == NULL)
		return (-1);
	while (temp_counter != NULL)
		temp_counter = temp_counter->next, counter++;
	if (index > (counter - 1))
		return (-1);

	if (index == 0)
	{
		temp1 = temp1->next;
		free(*head);
		*head = temp1;
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	for (counter = 0; counter < index; counter++)
		temp2 = temp1, temp1 = temp1->next;

	temp2->next = temp1->next;
	temp3 = temp1->next;
	if (temp3 != NULL)
		temp3->prev = temp2;
	free(temp1);
	return (1);
}
