/*
** EPITECH PROJECT, 2025
** paradigm-day05
** File description:
** main.c
*/

#include <stdio.h>
#include <stdlib.h>

#include "string.h"

int main(void)
{
    string_t s;

    string_init(&s, "abcdefg");
    s.assign_c(&s, "42");
    printf("TO_INT: %d\n", s.to_int(&s));
    string_destroy(&s);
    return (0);
}
