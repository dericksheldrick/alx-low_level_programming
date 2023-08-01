#include"lists.h"
/**
*get_nodeint_at_index - returns the nth node of a listint_t linked list.
*@head: pointer to the first node  of the list
*@index:is the index of the node, starting at 0
*Return: the nth node of a listint_t linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}

	return (temp ? temp : NULL);
}

