/*
** EPITECH PROJECT, 2021
** PUSHSWAP
** File description:
** It's the .h of my pushswap
*/

#ifndef PUSHSWAP_H_
    #define PUSHSWAP_H_

    #include "my.h"
    #include "struct.h"
    #include <stdlib.h>
    #include <stddef.h>

int switch_a(chain *l_a, int first);
int switch_b(chain *l_b, int first);
int switch_c(chain *l_a, chain *l_b, int first);
int give_a(chain *l_a, chain *l_b, int first);
int give_b(chain *l_a, chain *l_b, int first);
int rotate_a(chain *l_a, int first);
int rotate_b(chain *l_b, int first);
int rotate_r(chain *l_a, chain *l_b, int first);
int rotate_ra(chain *l_a, int first);
int rotate_rb(chain *l_b, int first);
int rotate_rr(chain *l_a, chain *l_b, int first);
int print_steps(chain *l_a, int nb_element, int first, chain *l_b);
void display_result(element *l_a);
void free_list(element *element);
int test_params(int argc, char **argv);

#endif /* PUSHSWAP_H_ */
