#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_listint - frees a linked list
  * @head: listint_t list to be freed
  */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != 0)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
