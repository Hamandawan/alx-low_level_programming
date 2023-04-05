#include "lists.h"

/**
 * sum_listint-calculate the sum of all elements in linked list
 * @head: pointer to the first node of the list
 *
 * Return: the sum of all intergers in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
