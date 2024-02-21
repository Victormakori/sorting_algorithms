#include "sort.h"

/**
* insertion_sort_list - Uses insertion sort to sort a doubly linked list(ints)
* Sorts in ascending order
*
* @list: Double pointer pointing to head node
* Return: void
*/
void insertion_sort_list(listint_t **list)
{
listint_t *tmp, *current, *prev;

if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}
current = (*list)->next;  /* Points to start of unsorted list */
while (current != NULL) /* if second node not empty */
{
tmp = current; /* assign the unsorted 2nd ele to a tmp */
prev = current->prev; /* Point prev to sorted list */

/* check if sorted node is empty or ele greater than the tmp one */
while (prev != NULL && prev->n > tmp->n)
{
if (prev->prev != NULL) /* check non empty previous pointer */
{
prev->prev->next = tmp; /* assign thr tmp if not empty */
}
if (tmp->next != NULL) /* checks if node next is not empty */
{
tmp->next->prev = prev; /* reconnect the two noded */
}
/* continued swap */
prev->next = tmp->next;
tmp->prev = prev->prev;
prev->prev = tmp;
tmp->next = prev;

if (tmp->prev == NULL)
{
*list = tmp;
}
print_list(*list);  /* print list */

prev = tmp->prev;
}

current = current->next;
}
}
