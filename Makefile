##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

CC	:=	gcc -std=gnu17

CFLAGS	=	-W
CFLAGS	+=	-Wall
CFLAGS	+=	-Wextra
CFLAGS	+=	-Wundef
CFLAGS	+=	-Wshadow
CFLAGS	+=	-Wunreachable-code
CLFAGS	+=	-Wmissing-prototypes
CFLAGS	+=	-pedantic
CFLAGS	+=	-iquote .

BDIR	=	.build/lib
T_BDIR	=	.build/test

SRC = src/string.c
T_SRC	=	src/main.c

OBJ = $(SRC:%.c=$(BDIR)/%.o)
T_OBJ = $(T_SRC:%.c=$(T_BDIR)/%.o)

NAME = libstring.a
T_NAME	=	test

all: $(NAME)

$(BDIR)/%.o: %.c
	@ mkdir -p $(dir $@)
	$(CC) -o $@ -c $< $(CFLAGS)

$(T_BDIR)/%.o: %.c
	@ mkdir -p $(dir $@)
	$(CC) -o $@ -c $< $(CFLAGS)

$(NAME): $(OBJ)
	@ ar rc ${NAME} $(OBJ)

test: $(NAME) $(T_OBJ)
	@ $(CC) $(T_OBJ) -L. -lstring -o $(T_NAME)

clean:
	@ rm -f $(OBJ)

fclean: clean
	@ rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
