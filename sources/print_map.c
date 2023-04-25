/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-martin.boucault
** File description:
** print_map
*/

#include "my.h"

void print_map(game_t *game, char **map)
{
    int i = 0;

    while (map[i] != NULL) {
        mvprintw((game->row - game->size) / 2 + i, (game->col
        - my_strlen(map[i])) / 2, "%s", map[i]);
        i++;
    }
}
