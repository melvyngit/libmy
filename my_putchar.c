/*
** my_putchar.c for my_putchar in /home/melvyn/etna/projet/covind_m/libmy_01/lib
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Sat Oct 21 16:03:00 2017 COVINDARASSOU Melvyn
** Last update Sat Oct 21 16:03:41 2017 COVINDARASSOU Melvyn
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
