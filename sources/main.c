/*
** EPITECH PROJECT, 2022
** LIB
** File description:
** main checker
*/

#include "my.h"

int main(int ac, char **av)
{
    game_t game;

    if (parse_arg(ac, av) != 0 || fill_struct(&game, av) == 84)
        return 84;
    setup_game(&game);
    while (1)
        gameloop(&game);
    return 0;
}
