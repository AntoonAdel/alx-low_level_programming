#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_listint - prints a singly linked list
  * @h: pointer to head of singly linked list
  * Return: Number of elements in list
  */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
