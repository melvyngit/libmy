/*
** my_getnbr.c for my_getnbr in /home/melvyn/etna/covind_m/my_getnbr
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Fri Oct 20 09:18:51 2017 COVINDARASSOU Melvyn
** Last update Fri Oct 27 16:00:59 2017 COVINDARASSOU Melvyn
*/

#include <unistd.h>

int	my_getnbr(char *str)
{
  int	iter;
  int	code;
  int	operand;
  
  code = 1;
  iter = 0;
  while (str[iter] && (43 == str[iter] || str[iter] == '-'))
    {
      if (45 == str[iter])
	code *= -1;
      iter++;
    }
  str += iter;
  iter = 0;
  operand = 0;
  while (str[iter] >= '0' && str[iter] <= 57)
    {
      operand *= 10;
      operand -= (str[iter] - '0');
      iter++;
    }
  return (code * operand * -1);
}
