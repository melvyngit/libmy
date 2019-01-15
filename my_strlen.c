/*
** my_strlen.c for my_strlen in /home/melvyn/etna/covind_m/my_strlen
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Wed Oct 18 09:25:40 2017 COVINDARASSOU Melvyn
** Last update Wed Oct 18 17:24:35 2017 COVINDARASSOU Melvyn
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
