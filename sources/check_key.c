/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-martin.boucault
** File description:
** check_key
*/

#include "my.h"

static void choose_key(game_t *game)
{
    switch (game->key) {
    case KEY_UP:
        move_up(game);
        break;
    case KEY_DOWN:
        move_down(game);
        break;
    case KEY_LEFT:
        move_left(game);
        break;
    case KEY_RIGHT:
        move_right(game);
        break;
    default:
        break;
    }
}

void check_getch(game_t *game)
{
    if (game->key == 27) {
        endwin();
        exit(0);
    }
    if (game->key == KEY_UP || game->key == KEY_DOWN || game->key == KEY_LEFT
    || game->key == KEY_RIGHT)
        choose_key(game);
    if (game->key == ' ')
        game->map = read_map(game->filepath);
}
