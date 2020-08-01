/*
** traitement_de_proposition.c for  in 
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Thu Dec 13 20:35:50 2001 julien barbier
** Last update Fri Dec 14 13:58:28 2001 julien barbier
*/

#include	"mpendu.h"

int		traitement_de_proposition(char *proposition, char *word, int *n)
{
  char		*identique;

  if (my_strlen(word) != my_strlen(proposition))
    {
      my_putstr("veuillez entrer un nombre de lettres corect\n");
      *n = *n - 1;
      return (1);
    }
  word = my_str2min(word);
  proposition = my_str2min(proposition);
  identique = affiche_ident(word, proposition, *n);
  affiche_mal_places(word, proposition, identique);
  return (0);
}

int		affiche_mal_places(char *word, char *proposition, char *identique)
{
  char		*word_copy;
  int		n_mal;

  word_copy = my_malloc(1024 + 1);
  my_strcpy(word, word_copy);
  inverse_identique(identique, proposition, word_copy);
  free(identique);
  my_putstr(" (");
  my_put_nbr(n_mal = compte_mal_place(word_copy, proposition));  
  my_putstr(" mal(s) place(s) : ");
  _aff_mal_places(proposition, n_mal);
  my_putstr(")\n");
  return (0);
}

int		_aff_mal_places(char *proposition, int mal)
{
  int		i;

  for (i = 0; proposition[i]; i++)
      if (proposition[i] != '-')
	{
	  my_putchar(proposition[i]);
	  mal--;
	  if (mal)
	    my_putstr(", ");
	}
}

int		inverse_identique(char *identique, char *proposition, char *word_copy)
{
  int		i;
  
  for (i = 0; identique[i]; i++)
    if (identique[i] != '-')
      {
	proposition[i] = '-';
	word_copy[i] = '-';
      }
  return (0);
}

int		compte_mal_place(char *word, char *proposition)
{
  int		i;
  int		j;
  int		n;
  int		ancien_n;

  n = 0;
  for (i = 0; proposition[i]; i++)
    {
      ancien_n = n;
      for (j = 0; j < word[j]; j++)
	if (proposition[i] == word[j] && proposition[i] != '-' && word[j] != '-')
	  {
	    n++;
	    word[j] = '-';
	    break;
	  }
      if (ancien_n == n)
	proposition[i] = '-';
    }
  return (n);
}

char		*affiche_ident(char *word, char *proposition, int n)
{
  int		i;
  int		ident;
  char		*identique;
  

  identique = my_malloc(1024 + 1);
  my_strcpy(proposition, identique);
  i = 0;
  ident = 0;
  while (identique[i])
    {
      if (identique[i] != word[i])
	identique[i] = '-';
      else
	ident++;
      i++;
    }
  if (ident == my_strlen(word))
    affiche_gagne(n);
  my_putstr(identique);
  return (identique);
}

int		affiche_gagne(int n)
{
  my_putstr(GAGNE);
  my_putstr(" en ");
  my_put_nbr(n + 1);
  my_putstr(" coups.");
  my_putstr("\n");
  exit(2);
}


char		*my_str2min(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (my_is_maj(str[i]))
	str[i] += 'a' - 'A';
      i++;
    }
  return (str);
}

int		my_is_maj(char c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  return (0);
}


