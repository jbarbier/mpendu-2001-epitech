/*
** play.c for  in 
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Thu Dec 13 19:47:50 2001 julien barbier
** Last update Fri Dec 14 10:37:52 2001 julien barbier
*/

#include	"mpendu.h"

int		play(char *word)
{
  int		ln_word;
  int		n_try;
  char		*proposition;
  int		n_read;

  proposition = my_malloc(1024 + 1);
  n_try = 0;
  ln_word = my_strlen(word);
  while (n_try < N_TRY)
    {
      affiche_pendu(n_try);
      affiche_proposition(ln_word);
      n_read = my_read(0, proposition, 1024);
      proposition[n_read - 1] = 0;
      traitement_de_proposition(proposition, word, &n_try);
      n_try++;
    }
  affiche_perdu();
  return (0);
}

int		affiche_perdu()
{
  my_putstr("------\n !  \\|\n @   |\n\\|/  |\n |   |\n/ \\  |");
  my_putstr("\n");
  my_putstr("you lose\n");
}


int		affiche_proposition(int n)
{
  int		i;

  my_putstr(PROPOSITION);
  my_put_nbr(n);
  my_putstr(" lettres): ");
  return (1);
}


int		affiche_pendu(int n)
{
  char            *PENDU[N_TRY];

  PENDU[0] = "------\n    \\|\n     |";
  PENDU[1] = "------\n !  \\|\n     |";
  PENDU[2] = "------\n !  \\|\n @   |";
  PENDU[3] = "------\n !  \\|\n @   |\n |   |";
  PENDU[4] = "------\n !  \\|\n @   |\n\\|   |";
  PENDU[5] = "------\n !  \\|\n @   |\n\\|/  |";
  PENDU[6] = "------\n !  \\|\n @   |\n\\|/  |\n |   |";
  PENDU[7] = "------\n !  \\|\n @   |\n\\|/  |\n |   |\n/    |";
  my_putstr(PENDU[n]);
  my_putchar('\n');
}


