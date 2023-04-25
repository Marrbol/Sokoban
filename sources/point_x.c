/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-martin.boucault
** File description:
** pointP
*/

#include "my.h"

static point_t check_pointp(game_t *game, point_t *P, char c)
{
    int y = P->y;

    for (int j = 0; game->map[y][j] != '\0'; j++) {
        P->x = -1;
        if (game->map[y][j] == c) {
            P->x = j;
            return *(P);
        }
    }
    return *(P);
}

point_t want_pointp(game_t *game, char c)
{
    point_t P = {0};

    for (int i = 0; game->map[i] != NULL; i++) {
        P.y = i;
        P = check_pointp(game, &P, c);
        if (P.x != -1)
            break;
    }
    return P;
}

static void check_x(game_t *game, int *index_nbX, char letter, point_t *co)
{
    if (game->map[co->y][co->x] == letter) {
        game->nbX[*index_nbX].x = co->x;
        game->nbX[*index_nbX].y = co->y;
        *index_nbX = *index_nbX + 1;
    }
}

static void parcour_map(game_t *game, int *index_nbX, char letter, point_t *co)
{

    for (; game->map[co->y] != NULL;  co->y++) {
        for (; game->map[co->y][co->x] != '\0'; co->x++) {
            check_x(game, index_nbX, letter, co);
        }
        co->x = 0;
    }
}

void want_point_x(game_t *game, char letter)
{
    int nbX = count_x(game);
    int index_nbX = 0;

    point_t co;
    co.x = 0;
    co.y = 0;

    for (index_nbX = 0; index_nbX != nbX;)
        parcour_map(game, &index_nbX, letter, &co);
    game->nbX[index_nbX].x = 0;
    game->nbX[index_nbX].y = 0;
}
