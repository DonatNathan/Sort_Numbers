/*
** EPITECH PROJECT, 2021
** PUSHSWAP
** File description:
** It's the file that countain the function "s" and "p"
*/

#include "../includes/pushswap.h"

int switch_a(chain *l_a, int first)
{
    element *temp = l_a->first;
    element *temp2 = l_a->first->next->next;

    if (l_a->first != NULL && l_a->first->next != NULL) {
        l_a->first = l_a->first->next;
        l_a->first->next = temp;
        temp->next = temp2;
    }
    first = 1;
    return (first);
}

int switch_b(chain *l_b, int first)
{
    element *temp = l_b->first;
    element *temp2 = l_b->first->next->next;

    if (l_b->first != NULL && l_b->first->next != NULL) {
        l_b->first = l_b->first->next;
        l_b->first->next = temp;
        temp->next = temp2;
    }
    first = 1;
    return (first);
}

int switch_c(chain *l_a, chain *l_b, int first)
{
    first = switch_a(l_a, first);
    first = switch_b(l_b, first);
    return (first);
}

int give_a(chain *l_a, chain *l_b, int first)
{
    element *temp = l_a->first;

    if (l_b->first != NULL) {
        l_a->first = l_b->first;
        l_b->first = l_b->first->next;
        l_a->first->next = temp;
    }
    first = 1;
    return (first);
}

int give_b(chain *l_a, chain *l_b, int first)
{
    element *temp = l_b->first;

    if (l_a->first != NULL) {
        l_b->first = l_a->first;
        l_a->first = l_a->first->next;
        l_b->first->next = temp;
    }
    first = 1;
    return (first);
}
