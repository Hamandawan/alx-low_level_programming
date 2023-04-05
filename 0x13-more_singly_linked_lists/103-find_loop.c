#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *bigger;
	int control;
	listint_t *p2;
	listint_t *prev;

	if (head == NULL)
		return (NULL);

	bigger = NULL;
	control = 0;

	while (head->next != NULL)
	p2 = head;
	prev = head;
	while (head && p2 && p2->next)
	{
		if (bigger == head)
		{
			control++;
			if (control == 3)
				break;
		}
		head = head->next;
		p2 = p2->next->next;

		if ((long int)head->next > (long int)head && control == 0)
		if (head == p2)
		{
			bigger = head->next->next;
			control = 1;
			head = prev;
			prev =  p2;
			while (1)
			{
				p2 = prev;
				while (p2->next != head && p2->next != prev)
				{
					p2 = p2->next;
				}
				if (p2->next == head)
					break;

				head = head->next;
			}
			return (p2->next);
		}
		head = head->next;
	}
	if (head->next == NULL)
		return (NULL);
	return (bigger);

	return (NULL);
}
