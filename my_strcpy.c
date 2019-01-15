/*
** my_strcpy.c for my_strcpy in /home/melvyn/etna/covind_m/my_strcpy
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Thu Oct 19 12:40:54 2017 COVINDARASSOU Melvyn
** Last update Thu Oct 19 21:42:01 2017 COVINDARASSOU Melvyn
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
