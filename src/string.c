/*
** EPITECH PROJECT, 2025
** paradigm-day05
** File description:
** string.c
*/

#include <stdlib.h>
#include <string.h>

#include "string.h"

void string_init(string_t *this, const char *s)
{
    this->str = strdup(s);
    this->assign_s = assign_s;
    this->assign_c = assign_c;
    this->append_s = append_s;
    this->append_c = append_c;
    this->at = att;
    this->clear = clear;
    this->length = length;
    this->compare_s = compare_s;
    this->compare_c = compare_c;
    this->copy = copy;
    this->c_str = c_str;
    this->empty = empty;
    this->find_s = find_s;
    this->find_c = find_c;
}

void string_destroy(string_t *this)
{
    if (this == NULL || this->str == NULL)
        return;
    free(this->str);
    this->str = NULL;
}

void assign_s(struct string_s *this, const struct string_s *str)
{
    char *old_str = this->str;

    this->str = strdup(str->str);
    if (old_str != NULL)
        free(old_str);
}

void assign_c(struct string_s *this, const char *s)
{
    char *old_str = this->str;

    this->str = strdup(s);
    if (old_str != NULL)
        free(old_str);
}

int find_s(const string_t *this, const string_t *str, size_t pos)
{
    char *ptr_found;

    if (this == NULL || str == NULL)
        return 0;
    if (this->str == NULL || str->str == NULL)
        return 0;
    if ((int) pos > this->length(this) - 1)
        return -1;
    ptr_found = strstr(&this->str[pos], str->str);
    if (ptr_found == NULL)
        return -1;
    return ptr_found - &this->str[pos] < 0
        ? &this->str[pos] - ptr_found
        : ptr_found - &this->str[pos];
}
