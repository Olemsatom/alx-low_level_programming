#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the numer of elements in a linked list
 *
 * Description: singly linked list node structure
 * Return: the number of nodes printed
 */
 
size_t listint_len(const listint_t *h)

{
	size_t nodes = 0;
	
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
