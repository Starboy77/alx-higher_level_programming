#include "lists.h"

/**
 * check_cycle - detect loop in linked list
 * @list: head pointer
 * Return: 0 or 1
 */


int check_cycle(listint_t *list)
{
	listint_t *slow = list, *fast = list;

	if (list == NULL)
		return (0);
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
