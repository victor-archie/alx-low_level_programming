#include "lists.h"

/**
 * print_list - prints all element in list_t
 * @h: list to be printed
 * Return: int
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			 printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}