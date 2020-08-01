/*
** get_next_line.h for  in 
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Fri Nov 23 14:32:31 2001 julien barbier
** Last update Thu Dec 13 14:22:11 2001 julien barbier
*/

#include	"my.h"
#define BUFFER_SIZE	1024

void	*my_malloc(unsigned int);
char	*get_next_line(const int);
void	*my_malloc(unsigned int);
void	*malloc(unsigned int);
void	free(void *);
void	*realloc(void *, unsigned int);
void	*my_realloc(void *, unsigned int);
int	init_var(char **, char **, int *, int *);
int	find_EOL(char *);

