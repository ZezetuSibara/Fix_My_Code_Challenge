#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - An integer doubly linkedlist is printed
 * @h: The first element pointer
 * Return: Number of elements is printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
