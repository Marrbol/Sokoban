/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-martin.boucault
** File description:
** pointO
*/

#include "my.h"

static void check_o(game_t *game, int *index_nbO, char letter, point_t *co)
{
    if (game->map[co->y][co->x] == letter) {
        game->nbO[*index_nbO].x = co->x;
        game->nbO[*index_nbO].y = co->y;
        *index_nbO = *index_nbO + 1;
    }
}

static void parcour_map(game_t *game, int *index_nbO, char letter, point_t *co)
{

    for (; game->map[co->y] != NULL;  co->y++) {
        for (; game->map[co->y][co->x] != '\0'; co->x++) {
            check_o(game, index_nbO, letter, co);
        }
        co->x = 0;
    }
}

void want_point_o(game_t *game, char letter)
{
    int nbX = count_o(game);
    point_t co;
    co.x = 0;
    co.y = 0;
    int index_nbO = 0;

    for (index_nbO = 0; index_nbO != nbX;) {
        parcour_map(game, &index_nbO, letter, &co);
    }
    game->nbX[index_nbO].x = 0;
    game->nbX[index_nbO].y = 0;
}
