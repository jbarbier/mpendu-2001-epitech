/*
** my.h for  in 
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Tue Oct 23 09:50:58 2001 julien barbier
** Last update Tue Oct 23 11:32:11 2001 julien barbier
*/

int	my_aff_alpha();
int	my_aff_revalpha();
int	my_aff_chiffre();
int	my_isneg(int);
int	my_aff_comb();
int	my_aff_comb2();
int	my_put_nbr(int);
int	my_aff_combn(int);
int	my_swap(char *, char *);
int     my_putstr(char *);
int	my_strlen(char *);
int	my_getnbr(char *);
void	my_sort_int_tab(int *, int);
int	my_putnbr_base(int, char *);
int	my_getnbr_base(char *, char *);
int	my_factorielle_it(int);
int	my_factorielle_rec(int);
int	my_power_it(int, int);
int	my_power_rec(int, int);
int	my_square_root(int);
int	my_is_prime(int);
int	my_find_prime_sup(int);
char	*my_strcpy(char *, char *);
char	*my_strncpy(char *, char *, int);
char	*my_revstr(char *);
char	*my_strstr(char *, char *);
int	my_strcmp(char *, char *);
int	my_strncmp(char *, char *, int);
char	*my_strupcase(char *);
char	*my_strlowcase(char *);
char	*my_strcapitalize(char *);
int	my_str_isalpha(char *);
int	my_str_isnum(char *);
int	my_str_islower(char *);
int	my_str_isupper(char *);
int	my_str_isprintable(char *);
int	my_showstr(char *);
int	my_showmem(char *, int);
char	*my_strcat(char *, char *);
int	my_strlcat(char *, char *, int);
int	my_putchar(char);


