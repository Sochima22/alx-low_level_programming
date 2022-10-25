#include"lists.h"
/**
* get_nodeint_at_index - gets node at a particular index
* @head: Pointer to first node of list
* @index: Determines what position in list of node to be returned
* Return: Node of specified index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	size_t c = 0;

	while (temp && c < index)
	{
		temp = temp->next;
		c++;
	}
	return (temp ? temp : NULL);
}
