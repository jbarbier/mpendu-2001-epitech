/*
** my_strcat.c for  in 
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Thu Oct 18 10:32:28 2001 julien barbier
** Last update Mon Dec 17 22:18:06 2001 julien barbier
*/

char    *my_strcat(char *str1, char *str2)
{
  int	i;
  int	j;

  i = 0;
  while (str1[i])
    i++;
  j = 0;
  while (str2[j])
    {
      str1[i + j] = str2[j];
      j++;
    }
  str1[i + j] = 0;
  return (str1);
}




