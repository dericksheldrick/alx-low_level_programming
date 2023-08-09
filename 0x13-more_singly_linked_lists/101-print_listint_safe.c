#include"lists.h"
#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *hen, *duck;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	hen = head->next;
	duck = (head->next)->next;

	while (duck)
	{
		if (hen == duck)
		{
			hen = head;
			while (hen != duck)
			{
				nodes++;
				hen = hen->next;
				duck = duck->next;
			}

			hen = hen->next;
			while (hen != duck)
			{
				nodes++;
				hen = hen->next;
			}

			return (nodes);
		}

		hen = hen->next;
		duck = (duck->next)->next;
	}

	return (0);
}

/**
*print_listint_safe - prints a listint_t linked list.
*@head: the pointer to the first node in the list
*Return:the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

