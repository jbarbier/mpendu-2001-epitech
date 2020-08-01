/*
** my_aff_nbr.c for tp1 in ~/c
** 
** Made by julien barbier
** Login   <barbie_j@epita.fr>
** 
** Started on  Wed Oct 10 13:39:31 2001 julien barbier
** Last update Tue Nov 27 09:38:27 2001 julien barbier
*/

int	my_put_nbr(int nb)
{
  int	lg;
  int	signe;
  
  signe = my_isneg(nb);
  nb *= signe;
  if (!nb)
    my_putchar('0');
  lg = length(nb);
  print_signe(signe);
  print_nbr(lg, nb);
  
}

int	print_signe(int plus_moins)
{
  if (plus_moins < 0)
    my_putchar('-');
}

int	print_nbr(int lon, int nbr)
{
  int	mod;
  int	bouc1;
  int	bouc2;
  int	nombre;
  
  nombre = nbr;  
  bouc1 = 0;
  bouc2 = 1;
  mod = 1;
  while (bouc1 < lon)
    {
      while (bouc2 < lon - bouc1 )
	{
	  mod *= 10;	  
	  nombre /= 10;
	  bouc2++;
	}
      my_putchar('0' + nombre);
      nbr %= mod;
      nombre = nbr;      
      bouc2 = 1;
      mod = 1;
      bouc1++;
    }
}

int	length(int num)
{  
  int	longue;
  
  longue = 0;
  while (num > 0 )
    {
      num /= 10;
      longue++;
    }
  return(longue);
}





