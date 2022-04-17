/*
** EPITECH PROJECT, 2021
** PUSHSWAP
** File description:
** It's the main file of my program pushswap
*/

#include "../includes/pushswap.h"

void display_result(element *l_a)
{
    my_printf("%d\n", l_a->value);
    if (l_a->next != NULL)
        display_result(l_a->next);
}

void free_list(element *element)
{
    if (element->next != NULL)
        free_list(element->next);
    free(element);
}

int test_params(int argc, char **argv)
{
    int mode = 0;

    if (argc >= 2 && argv[1][0] == '-' && argv[1][1] == 'v')
        mode = 1;
    return (mode);
}
