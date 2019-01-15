/*
** my_strncpy.c for my_strncpy in /home/melvyn/etna/covind_m/my_strncpy
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Thu Oct 19 16:02:06 2017 COVINDARASSOU Melvyn
** Last update Thu Oct 19 21:41:35 2017 COVINDARASSOU Melvyn
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	iter;

  iter = 0;
  while (n > iter && src[iter])
    {
      dest[iter] = src[iter];
      iter++;
    }
  if (n == iter)
    dest[iter] = '\0';
  return (dest);
}
