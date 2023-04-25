/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-martin.boucault
** File description:
** condition
*/

#include "my.h"

bool check_bottom_corners(game_t *game, int i)
{
    bool bottom_left = check_bottom_left(game, i);
    bool bottom_right = check_bottom_right(game, i);

    return (bottom_left || bottom_right);
}

bool check_top_corners(game_t *game, int i)
{
    bool top_left = check_top_left(game, i);
    bool top_right = check_top_right(game, i);

    return (top_left || top_right);
}

bool check_corners(game_t *game, int i)
{
    bool top = check_top_corners(game, i);
    bool bottom = check_bottom_corners(game, i);

    return (top || bottom);
}

int loose_condition(game_t *game)
{
    int counter_X = 0;
    int nb_X = game->nb_X;

    for (int i = 0; game->nbX[i].x != 0; i++)
        if (check_corners(game, i))
            counter_X++;
    if (counter_X == nb_X) {
        endwin();
        exit(1);
    }
    return 0;
}

int win_condition(game_t *game)
{
    int counter_win = 0;
    int nbO = game->nb_O;

    for (int i = 0; game->nbO[i].x != 0; i++)
        if (game->map[game->nbO[i].y][game->nbO[i].x] == 'X')
            counter_win++;
    if (counter_win == nbO) {
        endwin();
        exit(0);
    }
    return 0;
}
