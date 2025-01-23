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
    char test[256] = {0};
    for (int i = 0; i < 10; i++)
        test[i] = '.';

    string_init(&s, "Hello World!");
    printf("%d\n", copy(&s, test, 20, 6));
    printf("%s\n", test);
    string_destroy(&s);
    return (0);
}
