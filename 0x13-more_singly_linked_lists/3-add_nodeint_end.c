#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the end
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @n: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t)); /* make new node and set values */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL) /* account for empty list by pointing head to node */
		*head = new_node;
	else
	{
		tmp = *head; /* set tmp ptr to iterate w/o moving head ptr */

		while (tmp->next != NULL) /* iterate till last node */
			tmp = tmp->next;
		tmp->next = new_node; /* link last node to new node */
	}

	return (new_node);
}
