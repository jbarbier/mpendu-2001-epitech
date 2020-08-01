/*
** my_strlcat.c for  in 
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Thu Oct 18 10:33:29 2001 julien barbier
** Last update Fri Nov 23 15:23:44 2001 julien barbier
*/

char    *my_strlcat(char *str1, char *str2, int n)
{
  int	i;
  int	j;


  i = 0;
  while (str1[i])
    i++;
  j = 0;
  while (str2[j] && j < n)
    {     
      str1[i + j] = str2[j];
      j++;
    }
  while (j < n)
    {
      str1[i + j] = 0;
      j++;
    }
  str1[i + j] = 0;
  return (str1);
}
