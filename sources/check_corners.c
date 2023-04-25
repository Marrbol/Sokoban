/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-martin.boucault
** File description:
** check_corners
*/

#include "my.h"

bool check_bottom_right(game_t *game, int i)
{
    if ((game->map[game->nbX[i].y + 1][game->nbX[i].x] == '#') &&
        (game->map[game->nbX[i].y][game->nbX[i].x + 1] == '#'))
        return true;
    return false;
}

bool check_top_right(game_t *game, int i)
{
    if ((game->map[game->nbX[i].y - 1][game->nbX[i].x] == '#') &&
        (game->map[game->nbX[i].y][game->nbX[i].x + 1] == '#')) {
        return true;
    }
    return false;
}

bool check_top_left(game_t *game, int i)
{
    if ((game->map[game->nbX[i].y - 1][game->nbX[i].x] == '#') &&
        (game->map[game->nbX[i].y][game->nbX[i].x - 1] == '#'))
        return true;
    return false;
}

bool check_bottom_left(game_t *game, int i)
{
    if ((game->map[game->nbX[i].y + 1][game->nbX[i].x] == '#') &&
        (game->map[game->nbX[i].y][game->nbX[i].x - 1] == '#'))
        return true;
    return false;
}
