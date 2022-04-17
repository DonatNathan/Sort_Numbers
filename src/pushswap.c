/*
** EPITECH PROJECT, 2021
** PUSHSWAP
** File description:
** It's the main file of my program pushswap
*/

#include "../includes/pushswap.h"

void insert_element(chain *l_a, int number)
{
    element *new = malloc(sizeof(element));
    element *element = l_a->first;

    new->value = number;
    while (element->next != NULL)
        element = element->next;
    element->next = new;
    new->next = NULL;
}

int bubble_sort(chain *l_a, int nb_element, int first, chain *l_b)
{
    for (int cmpt = 1; cmpt < nb_element; cmpt += 1) {
        if (l_a->first->value > l_a->first->next->value)
            first = switch_a(l_a, first);
        first = rotate_a(l_a, first);
    }
    first = rotate_a(l_a, first);
    return (first);
}

void insert_all(int argc, chain *l_a, char **argv, int cmpt)
{
    for (cmpt = 3; cmpt < argc; cmpt += 1)
        insert_element(l_a, my_atoi(argv[cmpt]));
}

chain *create_list(int argc, char **argv, chain *l_a, chain *l_b)
{
    element *new = malloc(sizeof(element));
    int cmpt = 0;

    if (argc >= 2 && (argv[1][0] != '-' || argv[1][1] != 'v')) {
        new->value = my_atoi(argv[1]);
        new->next = NULL;
        l_a->first = new;
        l_b->first = NULL;
        for (cmpt = 2; cmpt < argc; cmpt += 1)
            insert_element(l_a, my_atoi(argv[cmpt]));
    } else if (argc >= 3) {
        new->value = my_atoi(argv[2]);
        new->next = NULL;
        l_a->first = new;
        l_b->first = NULL;
        insert_all(argc, l_a, argv, cmpt);
    }
    return (l_a);
}

int main(int argc, char **argv)
{
    int cmpt;
    chain *l_a = malloc(sizeof(chain *));
    chain *l_b = malloc(sizeof(chain *));
    int first = 0;

    l_a = create_list(argc, argv, l_a, l_b);
    if (test_params(argc, argv) == 0)
        for (cmpt = 1; cmpt < argc - 1; cmpt += 1)
            first = bubble_sort(l_a, argc - 1, first, l_b);
    display_result(l_a->first);
    free_list(l_a->first);
    free(l_a);
    free(l_b);
    return (0);
}
