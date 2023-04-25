/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** get the length of a string
*/

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

int fs_understand_return_of_read(int fd , char **buffer , int  size)
{
    *(buffer) = malloc(sizeof(char) * (size + 1));
    int value = read(fd, *buffer, size);
    (*buffer)[size] = '\0';
    return value;
}
