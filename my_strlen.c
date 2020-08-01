/*
** my_str_len.c for tp1 in ~/c
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Fri Oct 12 20:03:37 2001 julien barbier
** Last update Thu Dec 13 19:39:08 2001 julien barbier
*/

int	my_strlen(char *str)
{
  int	len;

  len = 0;
  while ( *(str + len) != '\0')
    len++;
  return (len);
}


