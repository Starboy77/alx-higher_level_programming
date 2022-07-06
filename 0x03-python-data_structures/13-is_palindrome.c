#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

void freeh(int *p1, int *p2);

/**
 * is_palindrome - check if a list is palindrome
 * @head: head node
 * Return: 0 0r 1
 */

int is_palindrome(listint_t **head)
{
	listint_t *h = *head;
	int i = 0, k = 0, n = 0, len, *p1, *p3;

	if (h == NULL)
		return (1);
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	p1 = malloc((n + 2) * sizeof(int));
	p3 = malloc((n + 2) * sizeof(int));
	if (!p1 || !p3)
		return (0);
	h = *head;
	while (h != NULL)
	{
		p1[i] = h->n;
		h = h->next;
		i++;
	}
	len = i;
	i--;
	while (i >= 0 && k < len)
	{
		p3[k] = p1[i];
		k++;
		i--;
	}
	while (i < len)
	{
		if (p1[i] != p3[i])
		{
			freeh(p1, p3);
			return (0);
		}
		i++;
	}
	freeh(p1, p3);
	return (1);
}


/**
 * freeh - free int pointers
 * @p1: first pointer
 * @p2: second pointer
 */

void freeh(int *p1, int *p2)
{
	free(p1);
	free(p2);
}
