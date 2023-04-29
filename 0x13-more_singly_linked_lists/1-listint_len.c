#include "lists.h"
/**
 * size_t listint_len(const listint_t *h):that returns the number of elements in a linked listint_t list.
*/




size_t listint_len(const listint_t *h)
{
    size_t x = 0;

    while (h != NULL)
    {
        x++;
        h = h->next;
    }
    return (x);
}
