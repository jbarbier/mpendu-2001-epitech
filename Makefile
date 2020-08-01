##
## Makefile for  in 
## 
## Made by julien barbier
## Login   <barbie_j@epita.fr>
## 
## Started on  Tue Nov 27 09:33:48 2001 julien barbier
## Last update Thu Dec 13 21:18:48 2001 julien barbier
##

NAME = mpendu

SRC =	main.c\
	my_putchar.c\
	my_putstr.c\
	my_read.c\
	get_next_line.c\
	my_malloc.c\
	my_strcat.c\
	my_strcpy.c\
	my_strlcat.c\
	my_strncpy.c\
	my_strlen.c\
	my_realloc.c\
	play.c\
	traitement_de_proposition.c\
	my_put_nbr.c\
	my_isneg.c

OBJ = $(SRC:.c=.o)

INC = -I./
CFLAGS = $(INC)

all: $(OBJ)
	cc -o $(NAME) $(OBJ) $(LIB)

clean:
	rm -f $(OBJ) *.core core *# *~

fclean: clean
	rm -f $(NAME)
