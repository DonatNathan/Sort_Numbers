/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** It's the file that countain my functions rr
*/

#include "../includes/pushswap.h"

int rotate_ra(chain *l_a, int first)
{
    element *element = l_a->first;
    struct element *temp = malloc(sizeof(struct element));
    struct element *temp2 = l_a->first;

    temp2 = l_a->first;
    while (element->next->next != NULL)
    element = element->next;
    temp = element->next;
    element->next = NULL;
    l_a->first = temp;
    l_a->first->next = temp2;
    first = 1;
    return (first);
}

int rotate_rb(chain *l_b, int first)
{
    element *element = l_b->first;
    struct element *temp = malloc(sizeof(struct element));
    struct element *temp2 = l_b->first;

    temp2 = l_b->first;
    while (element->next->next != NULL)
        element = element->next;
    temp = element->next;
    element->next = NULL;
    l_b->first = temp;
    l_b->first->next = temp2;
    first = 1;
    return (first);
}

int rotate_rr(chain *l_a, chain *l_b, int first)
{
    first = rotate_ra(l_a, first);
    first = rotate_rb(l_b, first);
    first = 1;
    return (first);
}
