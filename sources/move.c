/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-martin.boucault
** File description:
** move
*/

#include "my.h"

void move_up(game_t *game)
{
    if (game->map[game->P.y - 1][game->P.x] == '#')
        return;
    if (game->map[game->P.y - 1][game->P.x] == 'X') {
        if (game->map[game->P.y - 2][game->P.x] == '#')
            return;
        if (game->map[game->P.y - 2][game->P.x] == 'X')
            return;
        game->map[game->P.y][game->P.x] = ' ';
        game->map[game->P.y - 1][game->P.x] = 'P';
        game->map[game->P.y - 2][game->P.x] = 'X';
        return;
    }
    if (game->map_dup[game->P.y][game->P.x] == 'O') {
        game->map[game->P.y][game->P.x] = 'O';
        game->map[game->P.y - 1][game->P.x] = 'P';
        return;
    }
    game->map[game->P.y][game->P.x] = ' ';
    game->map[game->P.y - 1][game->P.x] = 'P';
}

void move_down(game_t *game)
{
    if (game->map[game->P.y + 1][game->P.x] == '#')
        return;
    if (game->map[game->P.y + 1][game->P.x] == 'X') {
        if (game->map[game->P.y + 2][game->P.x] == '#')
            return;
        if (game->map[game->P.y + 2][game->P.x] == 'X')
            return;
        game->map[game->P.y][game->P.x] = ' ';
        game->map[game->P.y + 1][game->P.x] = 'P';
        game->map[game->P.y + 2][game->P.x] = 'X';
        return;
    }
    if (game->map_dup[game->P.y][game->P.x] == 'O') {
        game->map[game->P.y][game->P.x] = 'O';
        game->map[game->P.y + 1][game->P.x] = 'P';
        return;
    }
    game->map[game->P.y][game->P.x] = ' ';
    game->map[game->P.y + 1][game->P.x] = 'P';
}

void move_left(game_t *game)
{
    if (game->map[game->P.y][game->P.x - 1] == '#')
        return;
    if (game->map[game->P.y][game->P.x - 1] == 'X') {
        if (game->map[game->P.y][game->P.x - 2] == '#')
            return;
        if (game->map[game->P.y][game->P.x - 2] == 'X')
            return;
        game->map[game->P.y][game->P.x] = ' ';
        game->map[game->P.y][game->P.x - 1] = 'P';
        game->map[game->P.y][game->P.x - 2] = 'X';
        return;
    }
    if (game->map_dup[game->P.y][game->P.x] == 'O') {
        game->map[game->P.y][game->P.x] = 'O';
        game->map[game->P.y][game->P.x - 1] = 'P';
        return;
    }
    game->map[game->P.y][game->P.x] = ' ';
    game->map[game->P.y][game->P.x - 1] = 'P';
}

void move_right(game_t *game)
{
    if (game->map[game->P.y][game->P.x + 1] == '#')
        return;
    if (game->map[game->P.y][game->P.x + 1] == 'X') {
        if (game->map[game->P.y][game->P.x + 2] == '#')
            return;
        if (game->map[game->P.y][game->P.x + 2] == 'X')
            return;
        game->map[game->P.y][game->P.x] = ' ';
        game->map[game->P.y][game->P.x + 1] = 'P';
        game->map[game->P.y][game->P.x + 2] = 'X';
        return;
    }
    if (game->map_dup[game->P.y][game->P.x] == 'O') {
        game->map[game->P.y][game->P.x] = 'O';
        game->map[game->P.y][game->P.x + 1] = 'P';
        return;
    }
    game->map[game->P.y][game->P.x] = ' ';
    game->map[game->P.y][game->P.x + 1] = 'P';
}
