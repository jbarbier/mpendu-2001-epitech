/*
** my_read.c for  in 
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Tue Nov 27 20:06:44 2001 julien barbier
** Last update Thu Dec 13 10:05:06 2001 julien barbier
*/

#include        "get_next_line.h"

int             my_read(const int fd, void *lu, int nb_a_lire)
{
  int           n_lu;

  n_lu = read(fd, lu, nb_a_lire);
  if (n_lu == -1)
    {
      my_putstr("ERROR READ\n");
      exit (2);
    }
  return (n_lu);
}

