/*
** EPITECH PROJECT, 2025
** paradigm-day05
** File description:
** string.h
*/

#ifndef STRING_H
    #define STRING_H

typedef struct string_s {
    char *str;

    void (*assign_s)(struct string_s *this, const struct string_s *str);
    void (*assign_c)(struct string_s *this, const char *s);
} string_t;

void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);

void assign_s(string_t *this, const string_t *str);
void assign_c(string_t *this, const char *s);
#endif //STRING_H
