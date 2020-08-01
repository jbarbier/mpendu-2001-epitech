/*
** mpendu.h for  in 
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Thu Dec 13 18:57:55 2001 julien barbier
** Last update Fri Dec 14 13:57:01 2001 julien barbier
*/

#include	<sys/types.h>
#include	<sys/uio.h>
#include	<unistd.h>
#include	<fcntl.h>
#include	<time.h>
#include	<stdlib.h>
#include	"get_next_line.h"

#define		DICO "./dic"
#define		N_TRY 8
#define		PROPOSITION "votre proposition ("
#define		GAGNE "gagne !"

typedef struct	s_list
{
  char		*word;
  struct s_list	*next;
}		t_list;

char		*pick_a_word();
char		*take_the_word(t_list *, int);
int		get_magic_number(int);
char		*my_str2min(char *);
int		my_is_maj(char);
char		*affiche_ident(char *, char *, int);
