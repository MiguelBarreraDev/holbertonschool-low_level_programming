#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Search a value in a sorted list of integers
 * using Jump search.
 *
 * @list: Pointer to the head of the list
 * @size: The number of nodes in list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tail = NULL, *head = NULL;
	int jump = 0;

	if (!list || size == 0)
		return (NULL);

	jump = sqrt(size);
	head = tail = list;

	while (!(tail->next) && tail->n < value)
	{
		head = tail;
		if (tail->index % jump == 0)
			printf("Value checked at index [%ld] = [%d]\n", tail->index, tail->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			head->index, tail->index);
	while (head && head->index <= tail->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", head->index, head->n);
		if (head->n == value)
			return (head);
		head = head->next;
	}
	return (NULL);
}
