/*
** EPITECH PROJECT, 2025
** paradigm-day05
** File description:
** string3.c
*/

#include <stdlib.h>
#include <string.h>

#include "string.h"

int compare_s(const string_t *this, const string_t *str)
{
    if (this == NULL || this->str == NULL)
        return -1;
    if (str == NULL || str->str == NULL)
        return -1;
    return strcmp(this->str, str->str);
}

int compare_c(const string_t *this, const char *str)
{
    if (this == NULL || this->str == NULL || str == NULL)
        return -1;
    return strcmp(this->str, str);
}

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    if (this == NULL || this->str == NULL || s == NULL)
        return 0;
    s = strncpy(s, &this->str[pos], n);
    return strlen(s);
}
