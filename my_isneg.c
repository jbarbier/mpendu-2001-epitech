/*
** my_isneg.c for tp1 in ~/c/cour
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Wed Oct 10 10:01:33 2001 julien barbier
** Last update Mon Dec 17 22:17:55 2001 julien barbier
*/

int	my_isneg (int nb)
{
  int	reponse;
  
  if (nb < 0)
    return(-1);
  return(1);
  write(1, &reponse, 1);
}

