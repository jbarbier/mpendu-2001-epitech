/*
** get_next_line.c for  in 
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Fri Nov 23 14:32:07 2001 julien barbier
** Last update Thu Dec 13 16:11:31 2001 julien barbier
*/

#include	"get_next_line.h"

char		*get_next_line(const int fd)
{
  static char	*buffer_static;
  char		*buffer;
  int		pos_EOL;
  int		size;
  int		n_read;
  char		*str;

  init_var(&str, &buffer, &n_read, &size);
  if (buffer_static)
    my_strcpy(buffer_static, buffer);
  while (((pos_EOL = find_EOL(buffer)) == -1) && (n_read != 0))
    {
      str = my_realloc(str, size = my_strlen(str) + my_strlen(buffer) + 1);
      my_strcat(str, buffer);
      n_read = my_read(fd, buffer, BUFFER_SIZE);
      if (n_read == 0 && size == 1)
	return (0);
      buffer[n_read] = 0;
    }
  str = my_realloc(str, size = my_strlen(str) + pos_EOL + 1 + 1);
  my_strlcat(str, buffer, pos_EOL);
  buffer_static = (pos_EOL == -1) ? 0: buffer + pos_EOL + 1;
  return (str);
}

int		init_var(char **str, char **buffer, int *n_read, int *size)
{
  *size = 0;
  *n_read = -1;
  *str = my_malloc(1);
  (*str)[0] = 0;
  *buffer = my_malloc(BUFFER_SIZE + 1);
  (*buffer)[0] = 0;
  return (0);
}

int		find_EOL(char *lu)
{
  int		i;

  for (i = 0; lu[i]; i++)
    if (lu[i] == '\n')
      return (i);	
  return (-1);
}




