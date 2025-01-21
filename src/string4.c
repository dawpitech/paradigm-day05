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

void insert_s(string_t *this, size_t pos, const string_t *str)
{
    char *new_str;

    if (this == NULL || str == NULL)
        return;
    if (this->str == NULL || str->str == NULL)
        return;
    if ((int) pos > this->length(this) - 1) {
        this->append_s(this, str);
        return;
    }
    new_str = calloc(1, sizeof(char) * (this->length(this)
        + strlen(str->str) + 1));
    strncpy(new_str, this->str, pos);
    strcat(new_str, str->str);
    strcat(new_str, &this->str[pos]);
    this->assign_c(this, new_str);
    free(new_str);
}

void insert_c(string_t *this, size_t pos, const char *str)
{
    char *new_str;

    if (this == NULL || this->str == NULL || str == NULL)
        return;
    if ((int) pos > this->length(this) - 1) {
        this->append_c(this, str);
        return;
    }
    new_str = calloc(1, sizeof(char) * (this->length(this)
        + strlen(str) + 1));
    strncpy(new_str, this->str, pos);
    strcat(new_str, str);
    strcat(new_str, &this->str[pos]);
    this->assign_c(this, new_str);
    free(new_str);
}
