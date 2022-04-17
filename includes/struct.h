/*
** EPITECH PROJECT, 2021
** PUSHSWAP
** File description:
** It's the file that countain my structs
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct element {
    int value;
    struct element *pre;
    struct element *next;
} element;

typedef struct chain {
    element *first;
} chain;

#endif /* STRUCT_H_ */
