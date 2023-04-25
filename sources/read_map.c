/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-martin.boucault
** File description:
** read_map
*/

#include "my.h"

static int if_letter(char **arr, int i, int j)
{
    if (arr[i][j] != '#' && arr[i][j] != 'X' && arr[i][j] != 'O' &&
    arr[i][j] != 'P' && arr[i][j] != ' ') {
        return 84;
    }
    return 0;
}

static int check_letter(char **arr)
{
    int tmp = 0;

    for (int i = 0; arr[i] != NULL; i++) {
        for (int j = 0; arr[i][j] != '\0'; j++) {
            tmp = tmp + if_letter(arr, i, j);
        }
    }
    if (tmp != 0)
        return 84;
    return 0;
}

char **read_map(char *filepath)
{
    struct stat buf;
    char *buffer = NULL;
    int fd = fs_open_file(filepath);
    char **array = NULL;

    if (filepath == NULL || fd == 84)
        return NULL;
    stat(filepath, &buf);
    fs_understand_return_of_read(fd, &buffer, buf.st_size);
    array = my_str_to_array(buffer, '\n');
    if (array == NULL || check_letter(array) == 84)
        return NULL;
    close(fd);
    return array;
}
