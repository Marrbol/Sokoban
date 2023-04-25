/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** pas besoin je pense que ta compris
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>
    #include <stdio.h>
    #include <ncurses.h>
    #include <stdlib.h>   // a changer chaque .c avec leur include
    #include <stdbool.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>

typedef struct point_s {
    int x;
    int y;
} point_t;

typedef struct game_s {
    int row;
    int col;
    int key;
    bool game;
    char *filepath;
    int size;
    int nb_X;
    int nb_O;
    char **map;
    char **map_dup;
    int row_map;
    int col_map;
    point_t P;
    point_t *nbX;
    point_t *nbO;
} game_t;

typedef struct flags {
    char flags;
    void (*ptr) (va_list args);
} struct_flags;

void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
char *my_strcat(char *dest, char const *src);
int my_put_nbr(int nb);
int my_printf(char *str, ...);
void my_put_float(float nb, int n);
int dec_to_binaire(int nbr);
int my_dec_to_hexa(int nbr);
int my_dec_to_octal(int nbr);
int my_dec_to_small_hexa(int nbr);
int my_compute_power_rec(int nb, int p);
int my_compute_power_it(int nb, int p);
void my_put_float2(float nb);
void pchar(va_list args);
void pstr(va_list args);
void pfloat(va_list args);
void pbin(va_list args);
void pnbr(va_list args);
void phexa(va_list args);
void poct(va_list args);
void pshexa(va_list args);
void percent(va_list args);
int my_getnbr(char *str);
char **my_str_to_array(char *str, char delim);
int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);
char *my_strdup(char const *src);
char *my_strcpy(char *dest, char const *src);
int fs_open_file(char const *filepath);
int my_getnbr(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strncpy (char *dest, char const *src, unsigned int n);
int my_index_of(char *str, char c);
char *my_strcpy_m(char const *str, unsigned int n);
int fs_understand_return_of_read(int fd , char **buffer , int  size);

char **read_map(char *filepath);
void print_map(game_t *game, char **map);
int fill_struct(game_t *, char **);
int parse_arg(int ac, char **av);
int get_size(game_t *game);
point_t want_pointp(game_t *game, char c);
int count_x(game_t *game);
void want_point_x(game_t *game, char c);
void want_point_o(game_t *game, char c);
void move_right(game_t *game);
void move_up(game_t *game);
void move_left(game_t *game);
void move_down(game_t *game);
void gameloop(game_t *game);
void setup_game(game_t *game);
void check_getch(game_t *game);
int loose_condition(game_t *game);
int count_o(game_t *game);
int win_condition(game_t *game);
void check_x_up(game_t *game);
bool check_bottom_right(game_t *game, int i);
bool check_top_right(game_t *game, int i);
bool check_top_left(game_t *game, int i);
bool check_bottom_left(game_t *game, int i);
#endif/* MY_H_*/
