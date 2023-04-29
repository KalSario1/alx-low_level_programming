#include "lists.h"
#include <stdio.h>
/**
 * size_t print_listint(const listint_t *h): a function that prints all the elements of a listint_t list.
 * @h: array of numbers
 * Return: None
*/

size_t print_listint(const listint_t *h)
{
     const listint_t *tp;
     unsigned int i = 0;

     tp = h;

     while (tp)
     {
        printf("%d\n", tp->n);
        i++;
        tp = tp->next;
     }
     return (i);
}
