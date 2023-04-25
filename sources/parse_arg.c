/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-martin.boucault
** File description:
** parse_arg
*/

#include "my.h"

int parse_arg(int ac, char **av)
{
    if (ac == 1)
        return -1;
    if (my_strcmp(av[1], "-h") == 0) {
        my_printf("USAGE\n    ./my_sokoban map\nDESCRIPTION\n     ");
        my_printf("map  file representing the warehouse map, containing ‘#’");
        my_printf(" for walls,\n          'P' for the player, 'X' for boxes ");
        my_printf("and 'O' for storage locations.\n");
        return -1;
    }
    return 0;
}
