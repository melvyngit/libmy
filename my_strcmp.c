/*
** my_strcmp.c for my_strcmp in /home/melvyn/etna/covind_m/my_strcmp
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Thu Oct 19 16:56:54 2017 COVINDARASSOU Melvyn
** Last update Thu Oct 19 21:41:02 2017 COVINDARASSOU Melvyn
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s2[i] && s1[i] && s1[i] == s2[i])
    i = i + 1;
  if (s2[i] == '\0' && s1[i] == '\0')
    return (0);
  if (s2[i] < s1[i])
    return (1);
  if (s2[i] > s1[i])
    return (-1);
  return (0);
}
