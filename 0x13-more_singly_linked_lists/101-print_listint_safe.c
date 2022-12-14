#include"lists.h"
/**
* free_listp - frees a linked list
* @head: head of a list.
* Return: no return.
*/
void free_listp(listp_t **head)
{
	listp_t *t;
	listp_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((t = c) != NULL)
		{
			c = c->next;
			free(t);
		}
		*head = NULL;
	}
}
/**
*print_listint_safe - prints a linked list.
* @h: head of a list.
*Description:nothing to describe
* Return: number of nodes in the list.
*/
size_t print_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *c;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp(&hptr);
				return (nnodes);
			}
		}

		c = *h;
		*h = (*h)->next;
		free(c);
		nnodes++;
	}

	*h = NULL;
	free_listp(&hptr);
	return (nnodes);
}
