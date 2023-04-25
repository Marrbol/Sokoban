/*
** EPITECH PROJECT, 2021
** str cat
** File description:
** on cat une str
*/
#include <stdio.h>
#include <unistd.h>
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int lensrc = my_strlen(src);
    int lendest = my_strlen(dest);
    int i = 0;

    for (i = 0; i <= lensrc; i++) {
        dest[lendest + i] = src[i];
    }
    dest[i + lendest + 1] = '\0';
    return dest;
}
