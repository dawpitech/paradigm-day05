/*
** EPITECH PROJECT, 2025
** paradigm-day05
** File description:
** string4.c
*/

#include <stdlib.h>
#include <string.h>

#include "string.h"

int find_c(const string_t *this, const char *str, size_t pos)
{
    char *ptr_found;

    if (this == NULL || str == NULL || this->str == NULL)
        return 0;
    if ((int) pos > this->length(this) - 1)
        return -1;
    ptr_found = strstr(&this->str[pos], str);
    if (ptr_found == NULL)
        return -1;
    return ptr_found - &this->str[pos] < 0
        ? &this->str[pos] - ptr_found
        : ptr_found - &this->str[pos];
}
