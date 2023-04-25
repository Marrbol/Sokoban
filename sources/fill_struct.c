/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-martin.boucault
** File description:
** fill_struct
*/

#include "my.h"

void my_memset(game_t *game, int size)
{
    for (int i = 0; i != size; i++) {
        game->nbX[i].x = 0;
        game->nbX[i].y = 0;
        game->nbO[i].x = 0;
        game->nbO[i].y = 0;
    }
}

int fill_struct(game_t *game, char **av)
{
    game->col = 0;
    game->game = true;
    game->key = 0;
    game->row_map = 0;
    game->col_map = 0;
    game->filepath = av[1];
    game->row = 0;
    game->size = 0;
    game->map_dup = read_map(av[1]);
    game->map = read_map(av[1]);
    if (game->map == NULL || game->map_dup == NULL)
        return 84;
    game->nb_O = count_o(game);
    game->nb_X = count_x(game);
    game->nbX = malloc(sizeof(point_t) * (game->nb_X + 1));
    game->nbO = malloc(sizeof(point_t) * (game->nb_O+ 1));
    my_memset(game, count_x(game) + 1);
    return 0;
}
