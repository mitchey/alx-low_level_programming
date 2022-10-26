#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data (n) of a listint_t list.
 * @head: A pointer to the head of the linstin_t list.
 * @Return: If the list is empty - 0, otherwise - the sum of all the data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	white (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
