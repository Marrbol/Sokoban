##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRCLIB 		=	lib/my/my_dec_to_binaire.c	\
				lib/my/my_printf/pointeur1.c		\
				lib/my/my_printf/pointeur2.c		\
				lib/my/my_dec_to_hexa.c		\
				lib/my/my_dec_to_octal.c	\
				lib/my/my_dec_to_small_hexa.c	\
				lib/my/my_printf.c		\
				lib/my/my_putchar.c		\
				lib/my/my_put_float.c		\
				lib/my/my_putstr.c		\
				lib/my/my_getnbr.c		\
				lib/my/my_strlen.c		\
				lib/my/my_put_nbr.c		\
				lib/my/my_revstr.c		\
				lib/my/my_strcat.c		\
				lib/my/my_strcpy.c		\
				lib/my/my_strdup.c		\
				lib/my/my_strcmp.c		\
				lib/my/my_str_to_array.c\
				lib/my/fs_open_file.c	\
				lib/my/my_index_of.c 	\
				lib/my/my_stcpy_m.c	 	\
				lib/my/my_compute_power_it.c \
				lib/my/my_put_float2.c \
				lib/my/fs_understand_return_of_read.c \

SRC			=	sources/main.c		\
				sources/read_map.c 	\
				sources/print_map.c \
				sources/fill_struct.c \
				sources/parse_arg.c 	\
				sources/get_size.c		\
				sources/point_x.c 	\
				sources/point_o.c 	\
				sources/move.c 	\
				sources/game_loop.c \
				sources/count_o_x.c \
				sources/condition.c\
				sources/check_key.c\
				sources/check_corners.c\

CFLAGS	=	  -Wall -Wextra -I ./include

LDFLAGS = 	  -L . -l my

OBJLIB = $(SRCLIB:.c=.o)

OBJ = $(SRC:.c=.o)

NAMELIB = libmy.a

BINAME = my_sokoban

$(NAMELIB):	$(OBJLIB) $(OBJ)
			ar rc lib/my/$(NAMELIB) $(OBJLIB)
			cp lib/my/$(NAMELIB) $(NAMELIB)
			gcc $(OBJ) -o $(BINAME) $(CFLAGS) $(LDFLAGS) -lncurses

all: $(NAMELIB)

clean:
	rm -f $(OBJLIB)
	rm -f $(OBJ)

fclean: clean
	rm -f lib/my/$(NAMELIB)
	rm -f $(NAMELIB)
	rm -f $(BINAME)
	rm -f vgcore.*
	rm -f *~

re: fclean all

debug: CFLAGS += -g
debug: re
