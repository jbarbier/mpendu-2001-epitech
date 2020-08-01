/*
** my_strcpy.c for  in 
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Tue Oct 16 11:18:06 2001 julien barbier
** Last update Sat Dec  8 16:34:51 2001 julien barbier
*/

char	*my_strncpy(char *source, char *destination, int n)
{
  int	i;

  i = 0;
  while (source[i] && i < n)
    {
      destination[i] = source[i];  
      i++;
    }
  while (i < n)
    {
      destination[i] = 0;
      i++;
    }
  destination[i] = 0;
  return (destination);
}
