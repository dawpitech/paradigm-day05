/*
** EPITECH PROJECT, 2025
** paradigm-day05
** File description:
** main.c
*/

#include <stdio.h>

#include "string.h"

int main(void)
{
    string_t s;

    string_init(&s, " ");
    s.assign_c(&s, "Hello World");
    s.append_c(&s, "!!");
    printf("%s\n", s.str);
    printf("%c\n", s.at(&s, 2));
    printf("Length: %d\n", s.length(&s));
    s.clear(&s);
    printf("Content: %s\nSize: %d\n", s.str, strlen(s.str));
    string_destroy(&s);
    return (0);
}
