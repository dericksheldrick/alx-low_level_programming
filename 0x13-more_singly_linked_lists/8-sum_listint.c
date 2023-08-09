#include"lists.h"
/**
*sum_listint -  returns the sum of all the data (n) of a listint_t
*@head: pointer to the first node in the linked list
*Return:the sum of all the data (n) of a listint_t
*/
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp = head;

	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}

	return (total);
}

