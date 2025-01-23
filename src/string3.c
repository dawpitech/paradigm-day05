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
    size_t idx;

    if (this == NULL || this->str == NULL || s == NULL)
        return 0;
    for (idx = 0; idx < n; idx++) {
        s[idx] = this->str[pos + idx];
        if (this->str[pos+ idx] == '\0')
            break;
    }
    return idx;
}

const char *c_str(const string_t *this)
{
    if (this == NULL)
        return NULL;
    return this->str;
}

int empty(const string_t *this)
{
    if (this == NULL || this->str == NULL)
        return 0;
    return this->length(this) == 0 ? 1 : 0;
}
