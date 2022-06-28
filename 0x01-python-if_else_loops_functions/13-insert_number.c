#include "lists.h"

/**
 * insert_node - insert a new node
 * @head: head node
 * @number: new data
 * Return: new
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *first = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	if (*head == NULL || first->n >= number)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (first && first->next && first->next->n < number)
	{
		first = first->next;
	}
	new->next = first->next;
	first->next = new;
	return (new);
}
