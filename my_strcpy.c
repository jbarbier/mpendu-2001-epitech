/*
** my_strcpy.c for  in 
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Tue Oct 16 11:18:06 2001 julien barbier
** Last update Thu Dec 13 10:36:38 2001 julien barbier
*/

char	*my_strcpy(char *source, char  *destination)
{
  int	i;
  
  i = 0;
  while (source[i])
    {
      destination[i] = source[i];
      i++;
    }
  destination[i] = 0;
  return (destination);
}
