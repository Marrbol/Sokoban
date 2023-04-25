/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-martin.boucault
** File description:
** get_size
*/

#include "my.h"

int get_size(game_t *game)
{
    for (; game->map[game->size] != NULL; game->size++);
    return game->size;
}
