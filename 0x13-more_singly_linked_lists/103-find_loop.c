#include"lists.h"
/**
*find_listint_loop -  finds the loop in a linked list.
*@head: pointer to the first node in the list
*Return:The address of the node where the loop starts
*NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *chair = head;
	listint_t *sit = head;

	if (!head)
		return (NULL);

	while (chair && sit && sit->next)
	{
		sit = sit->next->next;
		chair = chair->next;
		if (sit == chair)
		{
			chair = head;
			while (chair != sit)
			{
				chair = chair->next;
				sit = sit->next;
			}
			return (sit);
		}
	}

	return (NULL);
}

