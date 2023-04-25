/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-martin.boucault
** File description:
** count_O_X
*/

#include "my.h"

static int count_x_norme(game_t *game, int i)
{
    int count = 0;

    for (int j = 0; game->map[i][j] != '\0'; j++) {
        if (game->map[i][j] == 'X')
            count++;
    }
    return count;
}

int count_x(game_t *game)
{
    int count = 0;
    for (int i = 0; game->map[i] != NULL; i++) {
        count = count + count_x_norme(game, i);
    }
    return count;
}

static int count_o_norme(game_t *game, int i)
{
    int count = 0;

    for (int j = 0; game->map[i][j] != '\0'; j++) {
        if (game->map[i][j] == 'O')
            count++;
    }
    return count;
}

int count_o(game_t *game)
{
    int count = 0;
    for (int i = 0; game->map[i] != NULL; i++) {
        count = count + count_o_norme(game, i);
    }
    return count;
}
