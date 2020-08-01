/*
** my_realloc.c for  in 
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Fri Nov 23 15:43:57 2001 julien barbier
** Last update Thu Dec 13 15:07:37 2001 julien barbier
*/

#include	"get_next_line.h"

void            *my_realloc(void *ptr ,unsigned int n)
{
  void          *temp;

  temp = my_malloc(n);
  my_strcpy(ptr, temp);
  free (ptr);
  return (temp);
}




