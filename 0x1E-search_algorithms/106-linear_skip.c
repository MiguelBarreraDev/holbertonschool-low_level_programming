#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - Search a value in a sorted skip list of integers.
 *
 * @list: Pointer to the of the skip list to search
 * @value: The value to search for
 *
 * Return: Pointer to the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tail = NULL, *head = NULL;

	if (!list)
		return (NULL);

	head = tail = list;
	while (tail->express && tail->n < value)
	{
		head = tail;
		tail = tail->express;
		printf("Value checked at index [%ld] = [%d]\n", tail->index, tail->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			head->index, tail->index);
	while (head && head->n <= tail->n)
	{
		printf("Value checked at index [%ld] = [%d]\n", head->index, head->n);
		if (head->n == value)
			return (head);
		head = head->next;
	}
	return (NULL);
}
