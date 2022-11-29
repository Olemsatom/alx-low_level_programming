#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a linked list
 * @h: list
 *
 * Description: singly linked list node structure
 * Return: the number of nodes printed
 */

size_t print_listint(const listint_t *h)

{
	int nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (nodes);
}
