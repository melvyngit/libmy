/*
** my_strcat.c for my_strcat in /home/melvyn/etna/projet/covind_m/libmy_01
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Sat Oct 21 15:01:05 2017 COVINDARASSOU Melvyn
** Last update Sat Oct 21 15:51:46 2017 COVINDARASSOU Melvyn
*/

char	*my_strcat(char *dest, char *src)
{

  int	i;
  int	j;

  j = 0;
  i = 0;
  while (dest[i])
    i = i + 1;
  while (src[j])
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  return (dest);
}
