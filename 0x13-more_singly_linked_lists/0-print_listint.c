#include "lists.h"

/**
 * size_t print_listint(const listint_t *h): a function that prints all the elements of a listint_t list.
 * @h: array of numbers
 * Return: None
*/

size_t print_listint(const listint_t *h)
{
     size_t nnodes = 0;

     while (h != NULL)
     {
        printf("%d\n", h->n);
        h = h->next;
        nnodes++;
        
     }
     return(nnodes);
}
