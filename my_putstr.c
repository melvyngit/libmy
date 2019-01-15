/*
** my_putstr.c for my_putstr in /home/melvyn/etna/covind_m/my_putstr
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Wed Oct 18 09:32:19 2017 COVINDARASSOU Melvyn
** Last update Sat Oct 21 16:01:30 2017 COVINDARASSOU Melvyn
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  while (*str)
    {
      my_putchar(*str);
      str++;
    }
}
