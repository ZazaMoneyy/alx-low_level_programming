#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @h: type listint_t to print
 *
 * Return: print number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
