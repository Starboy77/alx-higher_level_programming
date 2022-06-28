#include "lists.h"

/**
 * insert_node - insert a new node
 * @head: head node
 * @number: new data
 * Return: new
 */
listint_t *insert_node(listint_t **head, int number)
{
	int i = 0;
	listint_t *first = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	while (first != NULL && i < 4)
	{
		first = first->next;
		i++;
	}
	new->next = first->next;
	first->next = new;
	return (new);
}
