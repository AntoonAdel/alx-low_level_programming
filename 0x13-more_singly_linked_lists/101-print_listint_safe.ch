#include "lists.h"

/**
  * print_listint_safe - prints a singly linked list
  * @head: head pointer of singly linked list
  * Return: Number of elements in list
  */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr, *tmp;
	unsigned int num = 0;

	ptr = head;
	if (ptr == 0)
		return (0);

	while (ptr != 0)
	{
		tmp = ptr;
		ptr = ptr->next;

		num++;

		printf("[%p] %d\n", (void *)tmp, tmp->n);

		if (tmp <= ptr)
		{
			printf("-> [%p] %d\n", (void *)ptr, ptr->n);
			break;
		}
	}

	return (num);
}
