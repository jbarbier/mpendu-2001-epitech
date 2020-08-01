/*
** main.c for  in 
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Thu Dec 13 18:34:56 2001 julien barbier
** Last update Fri Dec 14 10:18:11 2001 julien barbier
*/

#include	"mpendu.h"

int		main()
{
  char		*word;
  
  word = pick_a_word();
  play(word);
  return (0);
}

char		*pick_a_word()
{
  int		fd;
  char		*str;
  int		n_words;
  t_list	*list;
  int		magic_num;
  char		*line;

  list = 0;
  n_words = 0;
  fd = open(DICO, O_RDONLY);
  while(line = get_next_line(fd))
    {
      n_words = (my_strlen(line) == 1)? n_words: n_words + 1;
      if (my_strlen(line) > 1)
	my_put_in_list(&list, line);
    }
  if (!n_words)
    {
      my_putstr("pas de mots dans le dico\n");
      exit(3);
    }
  magic_num = get_magic_number(n_words);
  str = take_the_word(list, magic_num);
  close(fd);
  return (str);
}

char		*take_the_word(t_list *list, int num)
{
  int		compteur;

  compteur = 0;
  while (compteur < num)
    {
      list = list->next;
      compteur++;
    }
  return (list->word);
}

int		get_magic_number(int n_words)
{
  int		num;

  srandom(time(0));
  num = random();
  num %= n_words;
  return (num);
}

int		my_put_in_list(t_list **b, char *str)
{
  t_list	*new;

  new = my_malloc(sizeof(*new));
  new->word = str;
  new->next = *b;
  *b = new;
  return (0);
}


