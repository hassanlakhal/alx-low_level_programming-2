#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: pointer
 *
 * Return: node's address where the loop started
 * otherwise, NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *zer, *mtel;

	zer = head;
	mtel = head;

	if (!head)
		return (NULL);

	while (mtel && zer && zer->next)
	{
		zer = zer->next->next;
		mtel = mtel->next;

		if (zer == mtel)
		{
			mtel = head;
			while (mtel != zer)
			{
				mtel = mtel->next;
				zer = zer->next;
			}
			return (zer);
		}
	}

	return (NULL);
}
