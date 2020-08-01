/*
** my_putstr.c for tp2 in ~/c
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Thu Oct 11 10:55:57 2001 julien barbier
** Last update Fri Oct 12 22:15:40 2001 julien barbier
*/

int	my_putstr(char *chaine)
{
  int	i;
  
  i = 0;
  while ( *(chaine + i) != '\0')
    {
      my_putchar( *(chaine + i) );
      i++;
    }
}
