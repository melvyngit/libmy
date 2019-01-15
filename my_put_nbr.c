/*
** my_put_nbr.c for my_put_nbr in /home/melvyn/etna/covind_m/my_put_nbr
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Fri Oct 20 09:04:22 2017 COVINDARASSOU Melvyn
** Last update Sat Oct 21 16:02:10 2017 COVINDARASSOU Melvyn
*/

void	my_putchar(char c);

void	my_putstr(char *str);

void	my_put_nbr(int n)
{
  if (n == -2147483648)
    my_putstr("-2147483648");
  else if (n < 0)
    {
      my_putchar('-');
      my_put_nbr(-n);
    }
  else
    {
      if (n >= 10)
	my_put_nbr(n / 10);
      my_putchar('0' + (n % 10));
     }
}
