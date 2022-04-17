/*
** EPITECH PROJECT, 2021
** PUSHSWAP
** File description:
** It's the file that countain function "r" and "rr"
*/

#include "../includes/pushswap.h"

int rotate_a(chain *l_a, int first)
{
    element *temp = l_a->first;
    element *element = l_a->first;

    l_a->first = l_a->first->next;
    while (element->next != NULL)
        element = element->next;
    element->next = temp;
    element->next->next = NULL;
    first = 1;
    return (first);
}

int rotate_b(chain *l_b, int first)
{
    element *temp = l_b->first;
    element *element = l_b->first;

    l_b->first = l_b->first->next;
    while (element->next != NULL)
        element = element->next;
    element->next = temp;
    element->next->next = NULL;
    first = 1;
    return (first);
}

int rotate_r(chain *l_a, chain *l_b, int first)
{
    rotate_a(l_a, first);
    rotate_b(l_b, first);
    return (first);
}
