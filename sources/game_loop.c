/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-martin.boucault
** File description:
** game_loop
*/

#include "my.h"

void setup_game(game_t *game)
{
    initscr();
    keypad(stdscr, TRUE);
    getmaxyx(stdscr, game->row, game->col);
    game->size = get_size(game);
    print_map(game, game->map);
}

static void true_loop(game_t *game)
{
    check_getch(game);
    print_map(game, game->map);
    refresh();
    want_point_x(game, 'X');
    want_point_o(game, 'O');
    game->P = want_pointp(game, 'P');
    win_condition(game);
    loose_condition(game);
}

bool check_too_small(game_t *game)
{
    if (game->col <= my_strlen(game->map[0]) || game->row <= get_size(game)) {
        mvprintw(game->row / 2, game->col / 2, "TTY to small");
        if (game->key == 27) {
            endwin();
            exit(0);
        }
        return true;
    }
    return false;
}

void gameloop(game_t *game)
{
    clear();
    getmaxyx(stdscr, game->row, game->col);

    if (!check_too_small(game))
            true_loop(game);
    game->key = getch();
}
