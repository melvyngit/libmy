/*
** my_strncat.c for my_strncat in /home/melvyn/etna/projet/covind_m/libmy_01
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Sat Oct 21 15:03:33 2017 COVINDARASSOU Melvyn
** Last update Sat Oct 21 15:05:38 2017 COVINDARASSOU Melvyn
*/

char	*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i])
    i = i + 1;
  while ((j <= n - 1) && src[j])
    {
      dest[i] = src[j];
      j = j + 1;
      i = i + 1;
    }
  return (dest);
}
