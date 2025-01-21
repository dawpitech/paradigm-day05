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
    string_t s2;
    char *test_str = calloc(1, 10);

    string_init(&s, " ");
    string_init(&s2, "llo");
    s.assign_c(&s, "Hello World");
    s.append_c(&s, "!!");
    s.copy(&s, test_str, 6, 1);
    printf("COPY: %s\n", test_str);
    printf("%s\n", s.str);
    printf("%c\n", s.at(&s, 2));
    printf("FIND_S: %d + 1 = 2\n", s.find_s(&s, &s2, 1));
    printf("FIND_C: %d\n", s.find_c(&s, "Hello World", 0));
    printf("PRINT BUFF: %s\n", s.c_str(&s));
    printf("IS EMPTY: %d\n", s.empty(&s));
    printf("Length: %d\n", s.length(&s));
    s.clear(&s);
    printf("Content: %s\nSize: %d\n", s.str, s.length(&s));
    s.assign_c(&s, "- :: -");
    s.insert_c(&s, 3, "Hi there");
    printf("INSERT_C: %s\n", s.str);
    string_destroy(&s);
    return (0);
}
