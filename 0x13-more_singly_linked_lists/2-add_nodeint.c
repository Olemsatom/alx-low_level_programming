#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @n: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *newNode = malloc(sizeof(listint_t)); /*create new node*/

	if (newNode == NULL)
		return (NULL);

	newNode->n = n; /*set values*/

	newNode->next = *head; /*first link new node to point to first node*/

	*head = newNode; /*then switch list pointer to point to new node */

	return (newNode);
}
