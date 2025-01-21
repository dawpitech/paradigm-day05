/*
** EPITECH PROJECT, 2025
** paradigm-day05
** File description:
** string2.c
*/

#include <stdlib.h>
#include <string.h>

#include "string.h"

void append_s(string_t *this, const string_t *ap)
{
    char *old_str;
    char *new_str;

    if (this == NULL || ap == NULL)
        return;
    new_str = calloc(1, sizeof(char) * (strlen(this->str)
        + strlen(ap->str) + 1));
    strcat(new_str, this->str);
    strcat(new_str, ap->str);
    old_str = this->str;
    this->str = new_str;
    if (old_str != NULL)
        free(old_str);
}

void append_c(string_t *this, const char *ap)
{
    char *old_str;
    char *new_str;

    if (this == NULL || ap == NULL)
        return;
    new_str = calloc(1, sizeof(char) * (strlen(this->str)
        + strlen(ap) + 1));
    strcat(new_str, this->str);
    strcat(new_str, ap);
    old_str = this->str;
    this->str = new_str;
    if (old_str != NULL)
        free(old_str);
}

char att(const string_t *this, size_t pos)
{
    if (this == NULL || this->str == NULL || pos > strlen(this->str) - 1)
        return -1;
    return this->str[pos];
}

void clear(string_t *this)
{
    if (this == NULL || this->str == NULL)
        return;
    this->str = realloc(this->str, sizeof(char));
    this->str[0] = '\0';
}
