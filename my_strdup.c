/*
** my_strdup.c for my_strdup in /home/melvyn/etna/covind_m/my_strdup
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Mon Oct 23 14:25:11 2017 COVINDARASSOU Melvyn
** Last update Mon Oct 23 14:40:51 2017 COVINDARASSOU Melvyn
*/

#include <stdlib.h>

char	*my_strcpy(char *dest, char *src);
int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  char	*s1;

  if ((s1 = (malloc(sizeof(char) * my_strlen(str) + 1))) == NULL)
    return (NULL);
  my_strcpy(s1, str);
  return (s1);
}
