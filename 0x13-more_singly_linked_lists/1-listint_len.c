#include"lists.h"
/**
*list_len - To get no of elements in a list
*@h: Pointer to list or first node in list
*Return: Number of elements in list
*/
size_t listint_len(const listint_t *h)
{        
	size_t x;

	x = 0;
	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
