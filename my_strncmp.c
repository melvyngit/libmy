/*
** my_strncmp.c for my_strncmp in /home/melvyn/etna/covind_m/my_strncmp
** 
** Made by COVINDARASSOU Melvyn
** Login   <covind_m@etna-alternance.net>
** 
** Started on  Thu Oct 19 19:01:57 2017 COVINDARASSOU Melvyn
** Last update Sat Oct 21 15:36:47 2017 COVINDARASSOU Melvyn
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	iter;

  iter = 0;
  while (n > iter && (s1[iter] || s2[iter]))
    {
      if (s2[iter] < s1[iter])
	return (1);
      if (s2[iter] > s1[iter])
	return (-1);
      iter = iter + 1;
    }
  if (n > iter && (s1[iter] > s2[iter]))
    return (0);
  if (n > iter && (s1[iter] < s2[iter]))
    return (-1);
  return (0);
}
