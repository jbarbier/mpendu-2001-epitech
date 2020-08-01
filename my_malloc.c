/*
** my_malloc.c for  in 
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Wed Nov 14 20:24:43 2001 julien barbier
** Last update Fri Nov 23 15:45:42 2001 julien barbier
*/

#include	"get_next_line.h"
#include	"my.h"

void		*my_malloc(unsigned int n)
{
  void		*temp;

  temp = malloc(n);
  if (temp == 0)
    {
      my_putstr("ERREUR MALLOC\n");
      exit (2);
    }
  return (temp);
}
